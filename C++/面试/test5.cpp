//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
//********************************************************
#include <iostream>
#include"string.h"
using namespace std;

void UpperCase(char str[])
{
	int test=sizeof(str);
	int test2=sizeof(str[0]);
	for (size_t i=0;i<strlen(str);++i )
	{
		if('a'<=str[i]&&str[i]<='z')
			{
				str[i]-=('a'-'A');	
			}
	}
}


int main(int argc, char *argv[])
{	char str[]="aBcDsfdse";
	cout<<"The length of str is :"<<sizeof(str)/sizeof(str[0])<<endl;
	UpperCase(str);
	cout<<str<<endl;
	return 0;
}
