// -*- C++ -*-
// $Id: Number.h

//==============================================================================
/**
 * @file       Number.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NUMBER_H_
#define _NUMBER_H_

#include "Expr_Command.h"
#include "Stack.h"
#include <cstring>          // for size_t definition

/**
 * @class Number
 *
 * Basic implementation of a standard Number class.
 */
class Number : public Expr_Command
{
public:
  /// Default constructor.
  Number (Stack <int> & stack_, int n_);

  /// Destructor.
  ~Number (void);

  void execute(void);

  private:
  /// Pointer to the actual data.
  Stack<int> &stack_;
  int n_;

};

#include "Number.cpp"

#endif   // !defined _NUMBER_H_