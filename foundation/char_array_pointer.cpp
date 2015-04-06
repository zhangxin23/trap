/*************************************************************************
 *        File Name: char_array_pointer.cpp
 *           Author: zhangxin
 *             Mail: xin_zhang23@126.com 
 *     Created Time: 2014-11-25 21:50:37
 *      Description: 
 ************************************************************************/

#include <stdio.h>

//error
//extern char *str;

//correct
extern char str[];

int main()
{
	printf("%s\n", str);
}
