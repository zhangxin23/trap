#include <stdio.h>

#define LENGTH	100

//error
//reasion: src's length is larger than dest's length.
void sprintf_func()
{
	char src[LENGTH] = "abcdefghijklmnopqrstuvwxyz";
	char dest[LENGTH / 10] = "";
	//return value of sprintf is strlen(str).
	int len = sprintf(dest, "%s", src);
	printf("%s:\n", __FUNCTION__);
	printf("\tdest = %s\n", dest);
	printf("\tlen = %d\n", len);
	printf("\tsrc = %s\n", src);
}

//correct
void snprintf_func()
{
	char src[LENGTH] = "abcdefghijklmnopqrstuvwxyz";
	char dest[LENGTH / 10] = "";
	//return value of snprintf is strlen(src).
	int len = snprintf(dest, sizeof(dest), "%s", src);
	printf("%s:\n", __FUNCTION__);
	if(len < sizeof(dest) - 1) {
		printf("\tFailed! src len is %d, dest len is %d. Copy incomplete!\n",
				len, sizeof(dest));
	}
	else {
		printf("\tdest = %s\n", dest);
		printf("\tlen = %d\n", len);
		printf("\tsrc = %s\n", src);
	}
}

int main()
{
	//sprintf_func();
	snprintf_func();
}
