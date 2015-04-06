#include <stdio.h>

void compare_unsigned_signed_func()
{
	unsigned int left = 10000;
	int right = -1;
	printf("compare_unsinged_signed_func:\n");
	printf("\tleft = %d, right = %d\n", left, right);
	if(left > right)
		printf("\tleft > right\n");
	else
		printf("\tleft < right\n");
}


void compare_signed_func()
{
	int left = 10000;
	int right = -1;
	printf("compare_signed_func:\n");
	printf("\tleft = %d, right = %d\n", left, right);
	if(left > right)
		printf("\tleft > right\n");
	else
		printf("\tleft < right\n");
}

int main()
{
	compare_unsigned_signed_func();
	compare_signed_func();
}
