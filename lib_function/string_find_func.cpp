#include <iostream>
#include <stdio.h>

int main()
{
	std::string s = "abcdefghijklmn";
	size_t index = s.find("xyz");

	//error
	//if(index >= 0) {
	
	//correct
	if(index != std::string::npos) {
		printf("found, index = %d\n", index);
	} else {
		printf("not found!\n");
	}
}
