#include <stdio.h>
#include <iostream>
#include <sstream>

int main()
{
	using namespace std;

	int size = 100;
	stringstream strStream;
	int i = 0;
	for(; i < size; i++) {
		strStream << i;
		string numStr;
		strStream >> numStr;
		
		//error
		//clear() doesn't truncate the size of stringstream.
		//strStream.clear();
		
		//correct
		strStream.str("");
	}
	printf("size = %d\n", strStream.str().capacity());
}
