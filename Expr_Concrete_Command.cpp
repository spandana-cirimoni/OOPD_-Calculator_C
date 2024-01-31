#include "Expr_Concrete_Command.h"

Expr_Concrete_Command:: ~Expr_Concrete_Command()
{
}

Addition * Expr_Concrete_Command:: add(void)
{
  return new Addition();
};

Modulus * Expr_Concrete_Command:: reminder(void)
{
  return new Modulus();
};

Division * Expr_Concrete_Command:: divide(void)
{
  return new Division();
};

Subtraction * Expr_Concrete_Command:: subtract(void)
{
  return new Subtraction();
};

Multiplication * Expr_Concrete_Command:: product(void)
{
  return new Multiplication();
};

Number * Expr_Concrete_Command:: num(void)
{
  return new Number();
};

