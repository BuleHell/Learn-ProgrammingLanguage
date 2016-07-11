//*********************C++语言**************************** 
//*File Name:            文件名
//*Program Assignment :  该文件的作用 
//* Author:              徐锦涛  
//* Date:                （2013/8/6  14:34） 
//* Description:         （该文件的描述）
//********************************************************
#include <iostream>
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char *argv[])
{
	int i,j,n,s;
	scanf("%d",&n);
	for (int i=0;i<n ;i++ )
	{
		int factorial=1;
		for (int j=0;j<i ;j++ )
		{
			factorial*=j;	
		}
		s+=factorial;
	}
	printf("%d\n",s%1000000);
	return 0;
}
