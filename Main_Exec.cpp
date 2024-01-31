#include "Main_Exec.h"

//Default Constructor
Main_Exec::Main_Exec(void)
{
}

//destructor
Main_Exec::~Main_Exec(void)
{
}

bool Main_Exec:: infix_to_postfix(const std::string & infix, Array <Expr_Command *> & postfix)
{
    std::istringstream input(infix);
    std::string flag;
    Expr_Command * Expr_cmd = 0;
    Stack <Expr_Command *> expTemp;
    Stack <int> pr, p;
    p.push(-1);
    
    while(!input.eof()){
        if(flag == '+')
        {
            Expr_cmd=command.add();
        }
        else if(flag == '-')
        {
            Expr_cmd=command.subtract();
        }
        else if(flag == '*')
        {
            Expr_cmd=command.product();
        }
        else if(flag == '/')
        {
            Expr_cmd=command.divide();
        }
        else if(flag == '%')
        {
            Expr_cmd=command.reminder();
        }
        // COMMENT Where is the condition for handling parenthesis?! --done
        else if(flag == '('){
            p.push(expTemp.size());
        }
        else if(flag == ')'){
            while(expTemp.size() > expTemp.top())
        {
	        postfix.resize(postfix.size()+1);
	        expTemp.pop();
	        p.pop();
        }
        }
        else{
            Expr_cmd=command.num();
        }

    }
    }
};

// COMMENT The calculator should run until QUIT is entered.  -- done

void Main_Exec::run(void){
        bool flag = true;
        std::string str;

        while(flag) 
        {
            std::cout << "Enter the Linear Expression: ";
            std::cin>>str;

            if(str == "QUIT")
                flag = false;
            else
            {
                Array <Expr_Command *> cmd;
                try
                {
	                infix_to_postfix(str, cmd);
	                for(int i = 0; i < cmd.size(); i++)
	                {
	                    cmd[i]->execute(stack_);	  
	                }
	                stack_.pop();
                }
                catch(std::exception& e)
                {
	                std::cout << e.what() << std::endl;
                }  
            }
        }

};
