#include <iostream>
#include <set>

void erase_item_func()
{
	using namespace std;
	multiset<int> ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	ms.insert(2);

	cout << "before erase(2)" << endl;
	for(multiset<int>::iterator it = ms.begin();
		it != ms.end(); it++) {
		cout << *it << endl;
	}

	//erase(item) will delete all item in multiset,
	//if delete particular item, should use erase(iterator).
	//ms.erase(2);
	
	multiset<int>::iterator pos = ms.find(2);
	ms.erase(pos);

	cout << "------------------------------" << endl;
	cout << "after erase(2)" << endl;
	for(multiset<int>::iterator it = ms.begin();
		it != ms.end(); it++) {
		cout << *it << endl;
	}
}


void erase_return_value_func()
{
	using namespace std;
	multiset<int> ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(3);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	ms.insert(3);
	ms.insert(2);

	multiset<int>::iterator it;
	
	cout << __FUNCTION__ << ":" << endl;
	cout << "before erase(2)" << endl;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}

	for(it = ms.begin(); it != ms.end();) {
		if(*it == 2) {
			//in C++ standard, sequence container(vector, deque, list)'s erase()
			//will return iterator, and associative container(set, multiset, map,
			//multimap)'s erase() will not return iterator. So, it = ms.erase(it)
			//is error usage.
			//it = ms.erase(it);

			//correct
			ms.erase(it++);
		} else {
			it++;
		}
	}

	cout << "-------------------------------" << endl;
	cout << "after erase(2)" << endl;
	for(it = ms.begin(); it != ms.end(); it++) {
		cout << *it << endl;
	}
}

int main()
{
	erase_return_value_func();
}
