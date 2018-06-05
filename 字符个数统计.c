#include <stdlib.h>
#include "oj.h"


/*
功能:

输入:字符串

输出:无
     
返回:字符个数
*/

int GetCount( char* strInValue )
{
	 if(strInValue == NULL)
	     return 0;

	 int map[127] = {0};
	 int count = 0;
	 while(*strInValue != '\0')
	 {
	       map[*strInValue]++;
               strInValue++;
         }
	 for(int i = 0; i < 127; i++)
	 {
	       if(map[i])
		  count++;
	 }  
	 return count;
}
