// Real-C
#include "ENGINE.hpp"

#include "mguntrapbase.h"

TRIGGER( use )(obj user)
{
  Q4M9(this, user);
  return(0x00);
}

TRIGGER( message , "castspell" )(obj sender, list args)
{
  obj user = Q4BB(this, args);
  if(!isValid(user))
  {
    return(0x00);
  }
  Q5RD(user, this);
  targetObj(user, this);
  return(0x00);
}

TRIGGER( targetobj )(obj user, obj usedon)
{
  if(!Q4C8(user, this))
  {
    return(0x01);
  }
  if(Q49V(user, usedon, 0x00))
  {
    if(!Q5YC(user, this))
    {
      return(0x00);
    }
    if(Q4LT(user, getLocation(usedon), this))
    {
      Q4KP(user, usedon);
    }
    else
    {
      Q4RD(user);
    }
  }
  return(0x00);
}

TRIGGER( creation )()
{
  return(0x00);
}