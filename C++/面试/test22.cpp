//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
using namespace std;
int f(int a)
{
if(a==1 ) return 1;
if(a==2 ) return 2;
return f(a-1)+f(a-2);

}


int main(int argc, char *argv[])
{
	cout<<f(10 )<<endl;
	
	return 0;
}
