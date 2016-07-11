//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
#include<string>
using namespace std;
int main(int argc, char *argv[])
{
	int a=10;
	int b=20;
	int &rn=a;
	int equl;

	rn=b;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	rn=100;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	equl=(&a==&rn)?1:0;
	cout<<"equal="<<equl<<endl;

	
	return 0;
}
