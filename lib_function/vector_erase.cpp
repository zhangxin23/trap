#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(5);

	vector<int>::iterator it;
	cout << "Function: " << __FUNCTION__ << endl;
	cout << "before erase(2):" << endl;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}

	for(it = v.begin(); it != v.end();) {
		if(*it == 2) {
			//in vector, erase() will return next item's iterator.
			it = v.erase(it);
		} else {
			it++;
		}
	}

	cout << "----------------------------------" << endl;
	cout << "after erase(2):" << endl;
	for(it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
}
