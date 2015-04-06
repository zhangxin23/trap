#include <stdio.h>

void size_t_func()
{
	size_t size = sizeof(int);
	
	//error
	//while(--size >= 0)
	//correct
	while(--size > 0)
	{
		printf("%s: size = %u\n", __FUNCTION__, size);
	}

	if(size == 0)
		printf("%s: size = %u\n", __FUNCTION__, size);
}


int main()
{
	size_t_func();
}
