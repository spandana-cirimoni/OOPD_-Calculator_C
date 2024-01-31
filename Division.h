// -*- C++ -*-
// $Id: Division.h

//==============================================================================
/**
 * @file       Division.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIVISION_H_
#define _DIVISION_H_

#include "BinOP_Command.h"
#include "Stack.h"
#include <cstring>          // for size_t definition

/**
 * @class Division
 *
 * Basic implementation of a standard Division class.
 */
class Division : public BinOP_Command
{
public:
  /// Default constructor.
  Division (void);

  /// Destructor.
  ~Division (void);

  /// @brief to evaluate the operation of two numbers
  /// @param n1 number 1
  /// @param n2 number 2
  /// @return added integer
  int evaluate(int n1, int n2);

  private:
  /// Pointer to the actual data.
  Stack<int>* stack_;

};

#include "Division.cpp"

#endif   // !defined _DIVISION_H_