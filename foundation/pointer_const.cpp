/*************************************************************************
 *        File Name: pointer_const.cpp
 *           Author: zhangxin
 *             Mail: xin_zhang23@126.com 
 *     Created Time: 2014-11-25 21:41:46
 *      Description: 
 ************************************************************************/

#include <stdio.h>

void pointer_to_const_func()
{
	const int value = 10;
	int const *ptr = &value;
	const int *ptr_1 = &value;
	printf("value = %d, *ptr = %d, *ptr_1 = %d\n",
			value, *ptr, *ptr_1);

	//error
	//*ptr = 11;
	//*ptr_1 = 22;
}

void const_pointer_func()
{
	int value = 20;
	int * const ptr = &value;
	printf("value = %d, *ptr = %d\n", value, *ptr);

	//error
	//int other = 22;
	//ptr = &other;
}

int main()
{
	pointer_to_const_func();
	const_pointer_func();
}
