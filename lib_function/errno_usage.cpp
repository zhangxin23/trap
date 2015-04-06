#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
	int ret = write(100, "1", 1);
	printf("ret: %d, errno: %d\n", ret, errno);

	int fd = open("errno.txt", O_RDWR | O_CREAT, 0666);
	
	//errno holds the last errno of system call.
	//if(fd < 0 || errno != 0) {
	
	//correct
	if(fd < 0) {
		printf("[error]: fd: %d, errno: %d\n", fd, errno);
	} else {
		printf("[right]: fd: %d, errno: %d\n", fd, errno);
	}
}
