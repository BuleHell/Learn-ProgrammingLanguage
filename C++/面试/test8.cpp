//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
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
