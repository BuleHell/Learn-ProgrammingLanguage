//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
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
