/*************************************************************************
 *        File Name: func_no_return_value.cpp
 *           Author: zhangxin
 *             Mail: xin_zhang23@126.com 
 *     Created Time: 2014-11-25 22:09:48
 *      Description: 
 ************************************************************************/

#include <stdio.h>

int func()
{
	printf("%s, %s, %d\n", __FILE__, __FUNCTION__, __LINE__);

	//correct
	return 0;
}

int main()
{
	int flag = func();
	if(flag)
		printf("func return not zero.\n");
	else
		printf("func return zero.\n");
}
