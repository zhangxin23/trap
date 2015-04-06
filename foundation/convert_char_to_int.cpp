#include <stdio.h>

int main()
{
	char a = 0xB9;
	printf("signed char:\n");
	printf("a = %c\n", a);
	printf("a = %x\n", a);
	printf("(int)a = %d\n", (int)a);
	printf("(int)a = %x\n", (int)a);
	printf("-----------------------\n");
	unsigned char b = 0xB9;
	printf("unsigned char:\n");
	printf("b = %c\n", b);
	printf("b = %x\n", b);
	printf("(int)b = %d\n", (int)b);
	printf("(int)b = %x\n", (int)b);
}
