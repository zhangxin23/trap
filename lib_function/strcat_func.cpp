#include <stdio.h>
#include <string.h>

int main()
{
	char dest[7] = "12345";
	const char *src = "abcdefghijklmnopqrstuvwxyz";
	
	//error
	//strcat(dest, src);
	
	//correct
	if(strlen(dest) + strlen(src) < sizeof(src)) {
		strcat(dest, src);
	}

	printf("dest = %s\n", dest);
}
