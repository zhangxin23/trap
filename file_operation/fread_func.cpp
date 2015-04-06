#include <stdio.h>
#include <assert.h>
#include <string.h>

#define SIZE	1024

void error_fread_usage()
{
	FILE *fp = fopen("fread_test.txt", "r");
	char buffer[SIZE + 1];
	memset(buffer, 0, sizeof(buffer));
	printf("%s:\n", __FUNCTION__);
	int i = 0;
	for(; i < 100; i++) {
		int count = fread(buffer, 1, SIZE, fp);
		printf("count = %d, buffer = %s\n", count, buffer);
		assert(count == SIZE);
	}
	fclose(fp);
}

void correct_fread_usage()
{
	FILE *fp = fopen("fread_test.txt", "r");
	char buffer[SIZE + 1];
	memset(buffer, 0, sizeof(buffer));
	printf("%s:\n", __FUNCTION__);
	int i = 0;
	for(; i < 100; i++) {
		memset(buffer, 0, sizeof(buffer));
		int count = 0;
		while(count < SIZE) {
			count += fread(buffer + count, 1, SIZE - count, fp);
		}
		printf("count = %d, buffer = %s\n", count, buffer);
		assert(count == SIZE);
	}
	fclose(fp);
}

int main()
{
	correct_fread_usage();
}
