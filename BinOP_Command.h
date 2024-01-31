// -*- C++ -*-
// $Id: BinOPCommand.h

//==============================================================================
/**
 * @file       BinOP_Command.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BINOP_COMMAND_H_
#define _BINOP_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

/**
 * @class BinOP_Command
 *
 * Basic implementation of a standard BinOP_Command class.
 */
class BinOP_Command : public Expr_Command
{
public:
  /// Default constructor.
  BinOP_Command(void);

  /// @brief to evaluate the operation
  /// @param n1 number 1
  /// @param n2 number 2
  /// @return result after calculation
  virtual int evaluate (int n1, int n2) = 0;

  /// @brief It Pops the numbers and executes the postfix value
  /// @param stack_ Integer Stack
  void execute (Stack<int> & stack_);

};

#endif   // !defined _BINOP_COMMAND_H_