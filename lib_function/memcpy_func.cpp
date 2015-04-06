#include <stdio.h>
#include <string.h>

void memcpy_func()
{
	char buffer[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
	char src[] = "12345";
	//memcpy doesn't initialize buffer
	memset(buffer, 0, sizeof(buffer));
	memcpy(buffer, src, 2);
	printf("%s:\n", __FUNCTION__);
	printf("\tbuffer = %s\n", buffer);
}

int main()
{
	memcpy_func();
}
