#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("fflush_test.txt", "w");
	fprintf(fp, "%s\n", "1234567");
	
	//if don't use fflush(fp), when application exception terminal,
	//fflush_text.txt file will not contain 1234567.
	fflush(fp);

	while(1);

	fclose(fp);
}
