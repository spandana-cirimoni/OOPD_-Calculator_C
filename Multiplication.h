// -*- C++ -*-
// $Id: Multiplication.h

//==============================================================================
/**
 * @file       Multiplication.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MULTIPLICATION_H_
#define _MULTIPLICATION_H_

#include "BinOP_Command.h"
#include "Stack.h"
#include <cstring>          // for size_t definition

/**
 * @class Multiplication
 *
 * Basic implementation of a standard Multiplication class.
 */
class Multiplication : public BinOP_Command
{
public:
  /// Default constructor.
  Multiplication (void);

  /// Destructor.
  ~Multiplication (void);

  /// @brief to evaluate the operation of two numbers
  /// @param n1 number 1
  /// @param n2 number 2
  /// @return added integer
  int evaluate(int n1, int n2);

  private:
  /// Pointer to the actual data.
  Stack<int>* stack_;

};

#include "Multiplication.cpp"

#endif   // !defined _MULTIPLICATION_H_