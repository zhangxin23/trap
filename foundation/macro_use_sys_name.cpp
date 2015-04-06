#include <stdio.h>

#define printf(a, b) (a + b)

int main()
{
	printf(1, 2);
}
