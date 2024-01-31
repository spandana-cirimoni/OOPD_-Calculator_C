// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.
//
// Expr_Concrete_Command
//

#ifndef _EXPR_CONCRETE_COMMAND_H_
#define _EXPR_CONCRETE_COMMAND_H_

#include "Subtraction.h"
#include "Addition.h"
#include "Division.h"
#include "Modulus.h"
#include "Multiplication.h"
#include "Number.h"
#include "Stack.h"

class Expr_Concrete_Command
{
public:
    ///Default Constructor 
    Expr_Concrete_Command (void);
    ///Destructor
    ~Expr_Concrete_Command (void);
    //Addition
    Addition * add(void);
    /// Division
    Division * divide (void );
    /// Modulus
    Modulus * reminder(void);
    /// Multiplication 
    Multiplication * product (void );
    ///Number
    Number * num (void );
    ///Subtraction
    Subtraction *subtract(void );

private:
    Stack <int> & stack_;
};

#endif   // !defined _EXPR_CONCRETE_COMMAND_H_