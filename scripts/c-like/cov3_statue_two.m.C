// Real-C
#include "ENGINE.hpp"

TRIGGER( message , "barknow" )(obj sender, list args)
{
  string Q5ZM = args[0x00];
  bark(this, Q5ZM);
  return(0x00);
}