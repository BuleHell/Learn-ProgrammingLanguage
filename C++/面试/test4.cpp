//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
using namespace std;
class Base
{
	public:
		Base(int x):a(x)
		{
		}
		void print()
		{
			cout<<"Base";

		}
	private:
		int a;
};

class Derived:public Base
{
	public :
		Derived(int x):Base(x-1),b(x)
		{
			
		}
		void print()
		{
			cout<<"derived";
		}
	private:
		int b;
		
};

class A
{
	public:
		A(int x):a(x)
		{
		}
		virtual void print()
		{
			cout<<"A"<<endl;
		}
		virtual void print1()
		{
			cout<<"A"<<endl;
		}
	private:
		int a;

};

class B:public A
{
	public :
		 B(int x):A(x-1),b(x)
		 {}
		 virtual void print()
		 {
			cout<<"B"<<endl;
		 }
	private:
		int b;
};
int main(int argc, char *argv[])
{	
	Base obj1(1);
	cout<<"size of  base obj is "<<sizeof(obj1)<<endl;
	Derived obj2(2);
	cout<<"size of  Derived obj is "<<sizeof(obj2)<<endl;
	

	A a(1);
	cout<<"size of  base a is "<<sizeof(a)<<endl;
		B b(1);
	cout<<"size of  base b is "<<sizeof(b)<<endl;
	return 0;
}
