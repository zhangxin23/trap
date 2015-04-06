#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char ch;
	char dir[1024];
	memset(dir, 0, sizeof(dir));

	while((ch = getopt(argc, argv, "d:")) != -1) {
		switch(ch) {
			case 'd':
				strcpy(dir, optarg);
				break;
			default:
				break;
		}
	}

	printf("dir = %s\n", dir);
}
