#include <stdlib.h>
#include "oj.h"
//功能：获取nValue1和nValue2的最小公倍数
//输入： nValue1， nValue2为正整数
//输出：无
//返回： nValue1和nValue2的最小公倍数

unsigned int  GetMinCommonMultiple (unsigned int  x, unsigned int  y)
{
	if(x == 0 || y == 0)
		return 0;
	int min = x * y;
	int max, num;
	if(x <= y)
		num = x;
	else 
		num = y;
   
	for(int i = 1; i <= num; i++)
	{
	    if(x % i == 0 && y % i == 0)
			max = i;
	}
	return min / max;
}
