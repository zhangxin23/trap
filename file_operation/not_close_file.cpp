#include <stdio.h>

int main()
{
	FILE *fpFirst = fopen("first.txt", "r");
	if(!fpFirst) {
		fprintf(stderr, "Can not open first.txt for read.\n");
		return -1;
	}

	FILE *fpSecond = fopen("second.txt", "r");
	if(!fpSecond) {
		fprintf(stderr, "Can not open second.txt for read.\n");
		
		//when return at this point, fpFirst will not be released.
		//Should close fpFirst, and then return.
		//return -1;
		
		fclose(fpFirst);
		return -1;
	}

	fclose(fpFirst);
	fclose(fpSecond);
}
