#include <string.h>
#include <stdio.h>

template<int size> class MyClass
{
	private:
		int *m_Data;
	public:
		MyClass()
		{
			m_Data = new int[size];
		}

		~MyClass()
		{
			delete[] m_Data;
		}

		MyClass(const MyClass &other)
		{
			m_Data = new int[size];
			memset(m_Data, 0, sizeof(int) * size);
			memcpy(m_Data, other.m_Data, sizeof(int) * size);
		}
		
		//This function should be called conversion constructor.
		template<int size_1> MyClass(const MyClass<size_1> &other)
		{
			m_Data = new int[size];
			memset(m_Data, 0, sizeof(int) * size);
			memcpy(m_Data, other.m_Data, sizeof(int) * (size_1 > size ? size : size_1));
		}
};

int main()
{
	MyClass<2> my_2;
	MyClass<3> my_3;
	MyClass<3> other_3(my_3);
}
