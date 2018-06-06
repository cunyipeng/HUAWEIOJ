#include <stdlib.h>
#include "oj.h"
#include <string.h>


int  ProcessString(char * strInput,char *strOutput)
{
	if(strInput == NULL || strOutput == NULL)
		return -1;
	while(*strInput != '\0')
	{
		if(*strInput >= 'A' && *strInput <= 'Z')
			*strOutput++ = *strInput++ + 'a' - 'A';
		else if(*strInput >= 'a' && *strInput <= 'z')
            *strOutput++ = *strInput++;
		else
            strInput++;
	}
    *strOutput = '\0';
	return 0;
}
