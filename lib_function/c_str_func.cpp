#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

void error_func()
{
	//using namespace std;
	std::string str = "abcd";
	printf("%s:\n", __FUNCTION__);
	const char *pcStr = str.c_str();
	printf("\tcStr = %s, pcStr = %p\n", pcStr, pcStr);
	str.append("efg");
	const char *pcStr2 = str.c_str();
	printf("\tcStr2 = %s, pcStr2 = %p\n", pcStr2, pcStr2);

	//after second str.c_str(), pcStr become wild pointer.
	//free(const_cast<char *>(pcStr));
}

void correct_func()
{
	std::string str = "123456";
	char *dest = new char[20];
	strcpy(dest, str.c_str());
	printf("%s:\n", __FUNCTION__);
	str.append("789");
	printf("\tdest = %s\n", dest);
	printf("\tstr = %s\n", str.c_str());
	dest = "987654321";
	printf("\tdest = %s\n", dest);
}

int main()
{
	error_func();
	correct_func();
}
