//*********************C++����**************************** 
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
//********************************************************
#include <iostream>
using namespace std;

class A
{
public:
		A()
		{
		cout<<"A \n";
		::fun();
		}
};
A a;
int main(int argc, char *argv[])
{
	cout<<"main\n";
	
	return 0;
}
int fun()
{
cout<<"I am fun()!!\n";
}