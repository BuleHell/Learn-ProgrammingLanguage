//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
//********************************************************
#include <iostream>
using namespace std;
class A
{
public :
	A()
	{
		cout<<"this is A class!!"<<endl;
	}
	A(int a)
	{
	   cout<<"this is A class!!"<<a<<endl;
	}
};
int main(int argc, char *argv[])
{
	A *b=new A(3);
	A *a=new A;
	//cout<<"Hello, world\n";
	
	return 0;
}
