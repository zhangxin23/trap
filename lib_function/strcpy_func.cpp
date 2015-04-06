#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void strcpy_func()
{
	char src[] = "ab\0c";
	char dest[5];
	strcpy(dest, src);
	printf("%s:\n", __FUNCTION__);
	printf("\tstrlen(src) = %d\n", strlen(src));
	printf("\tsrc = %s\n", src);
	int i = 0;
	printf("\tsrc content: ");
	for(; i < sizeof(src); i++) {
		printf("%c", src[i]);
	}
	printf("\n");
	printf("\tstrlen(dest) = %d\n", strlen(dest));
	printf("\tdest = %s\n", dest);
}

void memcpy_func()
{
	char src[] = "ab\0c";
	char dest[5];
	memcpy(dest, src, sizeof(src));
	printf("%s:\n", __FUNCTION__);
	printf("\tsrc = %s\n", src);
	printf("\tsrc content: ");
	int i = 0;
	for(; i < sizeof(src); i++) {
		printf("%c", src[i]);
	}

	printf("\n\t-----------------\n");
	printf("\tdest = %s\n", dest);
	printf("\tdest content: ");
	for(i = 0; i < sizeof(dest); i++) {
		printf("%c", dest[i]);
	}
	printf("\n");
}

int main()
{
	strcpy_func();
	memcpy_func();
}
