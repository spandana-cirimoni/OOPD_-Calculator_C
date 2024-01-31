#include "Expr_Concrete_Command.h"
#include<string.h>
class Main_Exec
{
public:
  Main_Exec(void);
  ~Main_Exec(void);
  bool infix_to_postfix(const std::string & infix, Array <Expr_Command *> & postfix);
  void run(void);

private:
  Stack <int> stack_;
  Expr_Concrete_Command Command;
};