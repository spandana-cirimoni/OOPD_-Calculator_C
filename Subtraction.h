// -*- C++ -*-
// $Id: Subtraction.h

//==============================================================================
/**
 * @file       Subtraction.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUBTRACTION_H_
#define _SUBTRACTION_H_

#include "BinOP_Command.h"
#include "Stack.h"
#include <cstring>          // for size_t definition

/**
 * @class Subtraction
 *
 * Basic implementation of a standard Subtraction class.
 */
class Subtraction : public BinOP_Command
{
public:
  /// Default constructor.
  Subtraction (void);

  /// Destructor.
  ~Subtraction (void);

  /// @brief to evaluate the operation of two numbers
  /// @param n1 number 1
  /// @param n2 number 2
  /// @return added integer
  int evaluate(int n1, int n2);

  private:
  /// Pointer to the actual data.
  Stack<int>* stack_;

};

#include "Subtraction.cpp"

#endif   // !defined _SUBTRACTION_H_