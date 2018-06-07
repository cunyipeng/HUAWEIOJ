/******************************************************************************

Copyright (C), 2001-2011, Huawei Tech. Co., Ltd.

******************************************************************************
File Name     :
Version       :
Author        :
Created       : 2012/9
Last Modified :
Description   :
Function List :

History       :
1.Date        : 2012/9
Author      :
Modification: Created file

******************************************************************************/
#include <iostream>    
#include <vector>
#include <algorithm>

using namespace std;

/*****************************************************************************
Description   : 对输入字符串进行排序
Input Param   : str 待排序的字符串
Output Param  : str 排序后的字符串
Return Value  : 成功返回0，失败返回-1（比如，str为NULL）
*****************************************************************************/
bool cmp1(const char a, const char b)
{
	char a1 = toupper(a);
	char a2 = toupper(b);
	return (int)a1 < (int)a2;
}

int sort_string(char* str)
{
	char* b_str = str;
	if(str == NULL)
		return -1;

	if(*str == '\0')
		return 0;
	vector<char> vec; 

	while(*str != '\0')
	{
		if(isalpha(*str))
			vec.push_back(*str);
		str++;
	}
	stable_sort(vec.begin(), vec.end(), cmp1);
	vector<char>::iterator it = vec.begin();
        while(*b_str != '\0')
	{
		if(isalpha(*b_str))
			*b_str = *it++;
		b_str++;
	}
        return 0;
}


