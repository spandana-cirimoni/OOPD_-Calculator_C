// -*- C++ -*-
// $Id: Expr_Command.h

//==============================================================================
/**
 * @file       Expr_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_


#include "Stack.h"

class Expr_Command
{
    //Expr_Command(void);
public:
    virtual void execute (Stack<int> & s) = 0;
};

#endif // _EXPR_COMMAND_H_