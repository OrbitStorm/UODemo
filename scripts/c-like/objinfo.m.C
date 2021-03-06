// Real-C
#include "ENGINE.hpp"

TRIGGER( use )(obj user)
{
  targetObj(user, this);
  return(0x01);
}

TRIGGER( targetobj )(obj user, obj usedon)
{
  string Q63B;
  string Q5N7 = objToStr(usedon);
  int val = getValue(usedon);
  Q63B = val;
  concat(Q5N7, " ");
  concat(Q5N7, Q63B);
  barkTo(usedon, user, Q5N7);
  Q5N7 = "weight: ";
  Q63B = getWeight(usedon);
  concat(Q5N7, Q63B);
  bark(usedon, Q5N7);
  loc blah = loc( getLocation(usedon) );
  bark(usedon, "(" + getX(blah) + "," + getY(blah) + "," + getZ(blah) + ")");
  return(0x01);
}