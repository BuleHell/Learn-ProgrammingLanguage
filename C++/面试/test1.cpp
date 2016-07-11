//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
using namespace std;
class A
{
	 virtual ~A();
};

int main(int argc, char *argv[])
{
	A a;
	cout<<sizeof(a)<<endl;
	
	return 0;
}
