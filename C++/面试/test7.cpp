//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
#pragma pack(2)
using namespace std;
union u
 {
	char buf[9];
	int a;
 };
int main(int argc, char *argv[])
{
	cout<<sizeof(u)<<endl;
    cout<<sizeof(int)<<endl;	
	return 0;
}
