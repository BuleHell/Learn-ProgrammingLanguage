//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
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
