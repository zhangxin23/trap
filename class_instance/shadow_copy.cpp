#include <stdio.h>
#include <string.h>

#define SIZE	10

class BufferClass {
	public:
		int *m_Buffer;
		int m_Count;
	public:
		BufferClass()
		{
			m_Buffer = new int[SIZE];
			m_Count = 0;
		}
		
		//If some member of Class is pointer type, should not use default Copy Constructor.
		BufferClass(const BufferClass& buf)
		{
			if(this == &buf)
				return;

			this->m_Count = buf.m_Count;
			this->m_Buffer = new int[SIZE];
			memcpy(this->m_Buffer, buf.m_Buffer, sizeof(int) * SIZE);
		}

		//If some member of Class is pointer type, should not use default assignment function.
		BufferClass& operator=(const BufferClass& buf)
		{
			if(this == &buf)
				return *this;

			this->m_Count = buf.m_Count;
			delete(this->m_Buffer);
			this->m_Buffer = new int[SIZE];
			memcpy(this->m_Buffer, buf.m_Buffer, sizeof(int) * SIZE);
		}

		~BufferClass() 
		{
			printf("Delete!!\n");
			delete m_Buffer;
		}
};

void do_some_process(BufferClass *buf)
{
	BufferClass tmp;
	*buf = tmp;
}

int main()
{
	BufferClass buf;
	printf("m_Buffer[0]: %d\n", buf.m_Buffer[0]);
	do_some_process(&buf);
	printf("m_Buffer[0]: %d\n", buf.m_Buffer[0]);
}
