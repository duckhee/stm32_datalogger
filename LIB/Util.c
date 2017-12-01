
#include "Util.h"

#define UTIL_LOCAL


UTIL_DEF void Hw_second(volatile unsigned int time)
{
    for(;time >0;time--);
}

UTIL_DEF void Hw_1_second()
{
    Hw_second(8065960);
}