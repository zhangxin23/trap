#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main()
{
	char isFile = 0x8;
	DIR *dir = opendir("/home/zhangxin/sandbox/trap_c_c++/file_operation");
	struct dirent *ptr = NULL;
	while((ptr = readdir(dir)) != NULL) {
		if(ptr->d_type == isFile) {
			printf("%s\n", ptr->d_name);
		}
	}

	//should close dir
	//closedir(dir);
}
