#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
	const char *format = "%Y-%m-%d %H:%M";
	const char *timeStr = "1970-1-1 0:1";
	struct tm time_info;
	//struct tm should need be initialized.
	memset(&time_info, 0, sizeof(time_info));
	if(NULL == strptime(timeStr, format, &time_info)) {
		fprintf(stderr, "error\n");
	} else {
		time_t seconds = timegm(&time_info);
		fprintf(stdout, "time = [%s], time in seconds from 1970 is [%d]\n",
				timeStr, seconds);
	}
}
