//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
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
