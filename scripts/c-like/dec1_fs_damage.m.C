// Real-C
#include "ENGINE.hpp"

#include "globals.h"

TRIGGER( creation )()
{
  callback(this, 0x01, 0x3D);
  return(0x01);
}

TRIGGER( callback , 0x3D )()
{
  list Q4GI;
  if(!hasObjVar(this, "disarmed"))
  {
    getMobsInRange(Q4GI, getLocation(this), 0x00);
    for(int i = 0x00; i < numInList(Q4GI); i ++)
    {
      loseHP(Q4GI[i], dice(0x14, 0x05));
    }
  }
  callback(this, 0x01, 0x3D);
  return(0x01);
}