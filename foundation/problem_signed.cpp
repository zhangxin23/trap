#include <stdio.h>

typedef struct data_
{
	//error
	//int flag: 1;
	
	//correct
	unsigned int flag: 1;
	int other: 31;
}data;

int status()
{
	return 1;
}

int main()
{
	data test;
	test.flag = status();
	if(test.flag == 1)
		printf("test.flag == 1, it's true!\n");
	else
		printf("test.flag != 1, it's false!\n");
}
