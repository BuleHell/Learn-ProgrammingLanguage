//*********************第一题**************************** 
/*
输入一无符号整型(十进制)，将此无符号整型二进制位反序后输出（十进制）。
例如：输入240，240二进制为0000 0000 0000 0000 0000 0000 1111 0000，二进制反序为0000 1111 0000 0000 0000 0000 0000 0000；输出251658240

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
	//正序得出二进制
	int a;
	 for (int i=0;i<32 ;i++ )
	 {
	
		a=( n&1 ? 1 : 0);
	    n=n >> 1;
		zen[z_a--]=a;
	  }

      //反序输出
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
