//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
//********************************************************
#include <iostream>
using namespace std;
union u
 {
  double a;
  int b;
 };

union u2
 {
  char a[13];
  int b;
 };
union u3
 {
	char a[13];
	char b;
 };


int main(int argc, char *argv[])
{
	cout<<sizeof(u)<<endl;
	cout<<sizeof(u2)<<endl;
	cout<<sizeof(u3)<<endl;	
	return 0;
}
