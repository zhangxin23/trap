#include <stdio.h>
#include <assert.h>

//error
//#define MAX(a, b) a > b ? a : b

//correct
//#define MAX(a, b) (a > b ? a : b)

//correct
inline int MAX(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int a = 2;
	int b = 1;
	int expect_value = a * 3;
	int value = MAX(a, b) * 3;
	printf("expect_value = %d, value = %d\n", expect_value, value);
	assert(expect_value == value);
}
