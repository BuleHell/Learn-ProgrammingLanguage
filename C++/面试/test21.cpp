//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[])
{
	int a[]={1,23,4,5643,4,64,3,53,5,3};
	sort(a,a+10);
	for (int i=0;i<10 ;i++ )
	{
	cout<<a[i]<<" ";
	}
	return 0;
}
