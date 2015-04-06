#include <iostream>

using namespace std;

class MyClass
{
	private:
		int m_Data;

	public:
		MyClass()
		{
			m_Data = 0;
		}

		MyClass(const MyClass& my)
		{
			//cout << "Copy Constructor" << endl;
			cout << __FUNCTION__ << endl;
			*this = my;
		}

		//assignment function must be return reference
		MyClass& operator=(const MyClass &my)
		{
			//cout << "Assignment function" << endl;
			cout << __FUNCTION__ << endl;
			m_Data = my.m_Data;
			return *this;
		}
};

int main()
{
	cout << __FUNCTION__ << endl;
	MyClass first;
	MyClass second(first);
}
