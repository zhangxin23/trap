#include <stdio.h>
#include <string.h>

void strcpy_func()
{
	char dest[20];
	memset(dest, 'F', sizeof(dest));
	char src[] = "123456789";
	//strcpy auto fill '\0' at the end of dest.
	strcpy(dest, src);
	printf("%s:\n", __FUNCTION__);
	printf("\tsrc = %s\n", src);
	printf("\tdest = %s\n", dest);
}

void strncpy_func()
{
	char dest[20];
	memset(dest, 'F', sizeof(dest));
	char src[] = "123456789";
	//strncpy doesn't auto fill '\0' at the end of dest.
	strncpy(dest, src, strlen(src));
	dest[strlen(src)] = '\0';
	
	printf("%s:\n", __FUNCTION__);
	printf("\tsrc = %s\n", src);
	printf("\tdest = %s\n", dest);
}

int main()
{
	strcpy_func();
	strncpy_func();
}
