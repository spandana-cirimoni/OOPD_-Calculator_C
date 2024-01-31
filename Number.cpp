#include "Number.h"

Number:: Number(Stack <int> & s, int n)
:stack_ (s), n_ (n)
{

}

void Number:: execute(void)
{
  stack_.push(this->n_);
}