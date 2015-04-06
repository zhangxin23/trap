#include <stdio.h>

void min_int_negation()
{
	int minInt = 0xffffffff;
	if(minInt == 0xffffffff)
	{
		printf("minInt = %d\n", minInt);
		printf("minInt = %x\n", minInt);
		minInt = -minInt;
	}
	else if(minInt < 0)
		minInt = -minInt;

	printf("%s: minInt = %d\n", __FUNCTION__, minInt);
}

void int_overflow()
{
	long long result = 0;
	int left = 100000000;
	int right = 1000000000;
	
	//error
	//result = left * right;
	
	//correct
	result = static_cast<long long>(left) * static_cast<long long>(right);
	
	printf("%s:left = %d, right = %d, result = %lld\n", __FUNCTION__, left, right, result);
}

int main()
{
	min_int_negation();
	int_overflow();
}
