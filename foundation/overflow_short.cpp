#include <stdio.h>
#include <string.h>

int main()
{
#define LEN 70000
	char *buf = new char[LEN];
	memset(buf, 'f', LEN);
	buf[LEN - 1] = '\0';

	//error
	//short len = strlen(buf);	
	//printf("len = %d\n", len);
	
	//correct
	size_t len = strlen(buf);
	printf("len = %u\n", len);
}
