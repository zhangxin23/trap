#include <stdio.h>
#include <string.h>

void snprintf_format_func()
{
	char dest[10] = "";
	char src[10] = "123456";

	//error
	//int len = snprintf(dest, sizeof(dest), "%s");
	
	//correct
	int len = snprintf(dest, sizeof(dest), "%s", src);
	
	printf("%s: len = %d\n", __FUNCTION__, len);
}

void snprintf_return_func()
{
	char dest[10] = "";
	char src[20] = "123456123456123456";

	int len = snprintf(dest, sizeof(dest), "%s", src);
	
	//error
	//printf("%s:\n", __FUNCTION__);
	//printf("\tstrlen(src) = %d\n", strlen(src));
	//printf("\treturn len = %d\n", len);
	//dest[len] = '\0';
	//printf("\tdest = %s, destLen = %d\n", dest, strlen(dest));
	
	//correct
	printf("%s:\n", __FUNCTION__);
	if(len > sizeof(dest) - 1) {
		printf("\tFailed! Src length is %d, dest length is %d. Copy incomplete!\n",
				len, sizeof(dest));
	} else {
		printf("\tdest = %s, destLen = %d\n", dest, strlen(dest));
	}
}

int main()
{
	snprintf_format_func();
	snprintf_return_func();
}
