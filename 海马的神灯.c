#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "oj.h"
#include<math.h>
#include<stdio.h>

bool lightStatus(int n)
{
    double tmp1 = sqrt((double)n);
	double tmp2 = (int)tmp1;
	if(tmp1 == tmp2)
		return false;
    return true;
}
