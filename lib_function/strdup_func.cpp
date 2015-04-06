#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printDup(const char *str)
{
	char *tmp = strdup(str);
	printf("%s\n", tmp);
	
	//strdup() will alloc block and return it, but strdup() don't free it.
	//So user need free the alloced block.
	free(tmp);
}

int main()
{
	const char *ptr = "hello world";
	printDup(ptr);
}
