#include <stdlib.h>
#include <stdio.h>
#include "oj.h"

// 功能：判断输入 nValue 是否为水仙花数
// 输入： nValue为正整数
// 输出：无
// 返回：如果输入为水仙花数，返回1，否则返回0
unsigned int IsDaffodilNum(unsigned int nValue)
{ 
	unsigned int sum=0,t,orig,mul=1; 
	int n=0,m; 
	orig = nValue; 
	if(nValue < 100) 
	    return 0; 
	while(nValue > 0) 
	{ 
	    nValue /= 10; 
	    ++n; 
	} 
	nValue = orig; 
	m = n; 
	while(nValue > 0) 
	{ 
	   t = nValue % 10; 
	   while(m > 0) 
	   { 
		   mul *= t; 
		   --m; 
	   } 
	   sum += mul;
	   m = n; 
	   mul = 1; 
	   nValue /= 10; 
	} 

	if(orig == sum) 
	   return 1; 
	return 0; 
}


