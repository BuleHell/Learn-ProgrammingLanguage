//*********************��һ��**************************** 
/*
����һ�޷�������(ʮ����)�������޷������Ͷ�����λ����������ʮ���ƣ���
���磺����240��240������Ϊ0000 0000 0000 0000 0000 0000 1111 0000�������Ʒ���Ϊ0000 1111 0000 0000 0000 0000 0000 0000�����251658240

*/
#include <iostream>
#include <string>
#include<stdio.h>
#include <algorithm>
int  zen[32]={0,};
int  fan[32]={0,};
 

using namespace std;
int main(int argc, char *argv[])
{	unsigned int n;
	int z_a=31;
	cin>>n;
	//����ó�������
	int a;
	 for (int i=0;i<32 ;i++ )
	 {
	
		a=( n&1 ? 1 : 0);
	    n=n >> 1;
		zen[z_a--]=a;
	  }

      //�������
	z_a=31;
	for (int i=0;i<32 ;i++ )
	{
	     fan[i]=zen[z_a--];
	}

	//
	unsigned int sum=0;
	unsigned int lei=1;
	z_a=31;


	for (int i=0;i<32 ;i++ )
	{
		
		sum+=fan[z_a-i]*lei;
		lei*=2;
	}
	cout<<sum<<endl;
	 
	return 0;
}
