/*************************************************************************
 *        File Name: feof_func.cpp
 *           Author: zhangxin
 *             Mail: xin_zhang23@126.com 
 *     Created Time: 2014-11-26 21:54:11
 *      Description: 
 ************************************************************************/

#include <stdio.h>

void print_twice_last_line()
{
	printf("%s:\n", __FUNCTION__);
	char line[100];
	FILE *fp = fopen("test.txt", "r");
	while(!feof(fp)) {
		fgets(line, sizeof(line), fp);
		printf("%s", line);
	}

	fclose(fp);
}

void correct_func()
{
	printf("%s:\n", __FUNCTION__);
	char line[100];
	FILE *fp = fopen("test.txt", "r");
	while(true) {
		fgets(line, sizeof(line), fp);
		if(!feof(fp)) {
			printf("%s", line);
		} else {
			break;
		}
	}

	fclose(fp);
}

int main()
{
	print_twice_last_line();
	printf("\n------------------------------\n");
	correct_func();
}
