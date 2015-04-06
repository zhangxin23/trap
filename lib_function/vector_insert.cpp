/*************************************************************************
 *        File Name: vector_insert.cpp
 *           Author: zhangxin
 *             Mail: xin_zhang23@126.com 
 *     Created Time: 2014-11-26 22:10:37
 *      Description: 
 ************************************************************************/

#include <stdio.h>
#include <vector>

int main()
{
	using namespace std;
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	vector<int>::iterator iter;
	for(iter = v.begin(); iter != v.end(); iter++) {
		if(*iter == 3) {
			iter = v.insert(iter, 2);
			//after insert operation, iterator point to the new insert value,
			//so move iterator to next item.
			iter++;
		}
	}

	for(iter = v.begin(); iter != v.end(); iter++) {
		printf("value = %d\n", *iter);
	}
}
