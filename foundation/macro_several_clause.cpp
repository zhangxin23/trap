#include <stdio.h>
#include <stdlib.h>

//error
//#define EXIT(info) printf("%s\n", info);exit(1)

//correct
//#define EXIT(info) do { \
//	printf("%s\n", info); \
//	exit(1); \
//} while(0)

//correct
void EXIT(const char* info)
{
	printf("%s\n", info);
	exit(1);
}

int main()
{
	int flag = 1;
	if(flag == 0)
		EXIT("flag = 0, and exit(1)");
	
	printf("flag is not equal 0.\n");
}
