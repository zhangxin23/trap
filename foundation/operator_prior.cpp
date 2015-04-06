#include <stdio.h>
#include <assert.h>

int main()
{
	int left = 2;
	int value = 1;
	int expect_value = 5;//expect_value = value * 2 * 2 + 1 = 1 * 2 * 2 + 1 = 5
	value = (value << left) + 1;
	printf("expect_value = %d, value = %d\n", expect_value, value);
	assert(expect_value == value);
}
