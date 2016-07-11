//*********************C++语言**************************** 
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
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