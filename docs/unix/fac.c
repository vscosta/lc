
#include "fac.h"

int fac( int i )
{
  if ( i == 0)
    return 1;  
  return i * fac(i-1);
}

