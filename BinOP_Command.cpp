//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#include "BinOP_Command.h"

// get the values from the stack and execute the accordingly
void BinOP_Command:: execute(Stack<int> & s)
{
    int n2 = s.pop(), n1 = s.pop();
    int result = this->evaluate (n1, n2);
    s.push(result);
}