//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
//********************************************************
#include <iostream>
using namespace std;


void swap(char *&x,char *&y)
{
	char *temp;
	temp=x;
	x=y;
	y=temp;
}
int main(int argc, char *argv[])
{
	char *ap="hello";
	char *bp="how are you !";

	cout<<"ap:"<<ap<<endl;
	cout<<"bp:"<<bp<<endl;

	swap(ap,bp);

	cout<<"swap ap,ap:"<<endl;

	cout<<"ap:"<<ap<<endl;
	cout<<"bp:"<<bp<<endl;

	return 0;
}
