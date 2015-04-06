/*************************************************************************
 *        File Name: struct_init.cpp
 *           Author: zhangxin
 *             Mail: xin_zhang23@126.com 
 *     Created Time: 2014-11-25 21:55:21
 *      Description: 
 ************************************************************************/

#include <stdio.h>

typedef struct rectangle_
{
	int length;
	int width;
}rectangle;

int main()
{
	rectangle rect = {1, 2};
	printf("rect.length = %d, rect.width = %d\n", rect.length, rect.width);

	rectangle rect_1 = {rect_1.length = 11, rect_1.width = 22};
	printf("rect_1.length = %d, rect_1.width = %d\n", rect_1.length, rect_1.width);
}
