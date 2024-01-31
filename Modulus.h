// -*- C++ -*-
// $Id: Modulus.h

//==============================================================================
/**
 * @file       Modulus.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MODULUS_H_
#define _MODULUS_H_

#include "BinOP_Command.h"
#include "Stack.h"
#include <cstring>          // for size_t definition

/**
 * @class Modulus
 *
 * Basic implementation of a standard Modulus class.
 */
class Modulus : public BinOP_Command
{
public:
  /// Default constructor.
  Modulus (void);

  /// Destructor.
  ~Modulus (void);

  /// @brief to evaluate the operation of two numbers
  /// @param n1 number 1
  /// @param n2 number 2
  /// @return added integer
  int evaluate(int n1, int n2);

  private:
  /// Pointer to the actual data.
  Stack<int>* stack_;

};

#include "Modulus.cpp"

#endif   // !defined _MODULUS_H_