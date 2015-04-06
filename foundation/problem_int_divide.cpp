#include <stdio.h>

void divide_int(int a, int b)
{
	float result = 0;
	result = a / b;
	printf("%s:\n", __FUNCTION__);
	printf("\tresult = %f\n", result);
}

void divide_float(float a, float b)
{
	float result = 0;
	result = a / b;
	printf("%s:\n", __FUNCTION__);
	printf("\tresult = %f\n", result);
}


int main()
{
	divide_int(1, 2);
	divide_float(1, 2);
}
