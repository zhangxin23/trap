#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

void error_version()
{
	ifstream infile;
	infile.open("getline_test.txt", ios::binary);
	char buffer[10];
	while(!infile.eof()) {
		infile.getline(buffer, sizeof(buffer), '\n');
		cout << buffer << endl;
	}
	infile.close();
}

void correct_version()
{
	ifstream infile;
	infile.open("getline_test.txt", ios::binary);
	char buffer[10] = {0};
	while(true) {
		infile.getline(buffer, sizeof(buffer), '\n');
		cout << buffer << endl;
		
		if(infile.eof()) {
			break;
		}

		if(!infile.good()) {
			infile.clear();
			//break;
		}
	}
	infile.close();
}

void error_version_seekg()
{
	ifstream infile;
	infile.open("getline_test.txt", ios::binary);
	char buffer[255];
	int line = 0;
	while(infile.getline(buffer, 255)) {
		line++;
	}
	cout << "total line:" << line << endl;
	infile.seekg(0, ios::beg);
	while(infile.getline(buffer, 255)) {
		cout << buffer << endl;
	}
	infile.close();
}

void correct_version_seekg()
{
	ifstream infile;
	infile.open("getline_test.txt", ios::binary);
	char buffer[255];
	int line = 0;
	while(infile.getline(buffer, 255)) {
		line++;
	}
	cout << "total line:" << line << endl;
	infile.clear();
	infile.seekg(0, ios::beg);
	while(infile.getline(buffer, 255)) {
		cout << buffer << endl;
	}
	infile.close();
}

int main()
{
	//correct_version();
	correct_version_seekg();
}
