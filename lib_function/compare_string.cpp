#include <stdio.h>
#include <string.h>

int main()
{
	const char *str_a = "hello world";
	char str_b[12];
	strcpy(str_b, str_a);
	printf("str_a = %p, str_a = %s\n", str_a, str_a);
	printf("str_b = %p, str_b = %s\n", str_b, str_b);
	
	//error
	//compare pointer of str_a and str_b
	//if(str_a == str_b) {
	
	//correct
	//if(*str_a == *str_b) {
	
	//correct
	if(!strcmp(str_a, str_b)) {
		printf("equal!\n");
	} else {
		printf("not equal!\n");
	}
}
