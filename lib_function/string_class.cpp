#include <iostream>
#include <stdio.h>
#include <string.h>

void messageCopy(const char *msg, size_t length, std::string &str)
{
	int i = 0;
	for(; i < length; i++) {
		str[i] = msg[i];
	}
}

int main()
{
	char message[10] = "123456789";
	std::string str;
	str.reserve(10);
	
	//error
	//messageCopy doesn't change string's size().
	//messageCopy(message, 10, str);
	
	//correct
	str.append(message, strlen(message));

	printf("str = %s, length = %d\n", str.c_str(), str.size());
	if(str.empty()) {
		printf("empty message.\n");
	}
}
