/*
��Ŀ����
��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��

����
���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0<n<55)��n�ĺ�������Ŀ��������
n=0��ʾ�������ݵĽ�������������

���
����ÿ������ʵ��������ڵ�n���ʱ��ĸţ��������
ÿ�����ռһ�С�

��������
2
4
5
0
�������
2
4
6
*/

#include<stdio.h>
int f(int cows)
{
 int one=1;
	 int two=2;
	 int three=3;
	 int four=4;
 int i=0;
 int sum=0;
 if(cows<4) return cows;
 else
 for(i = 4; i < cows + 1; i++)
 {
  four = one + three;
  one = two;
  two = three;
  three = four;
 }
 sum = four;
 return sum;


}

int main(int argc, char *argv[])
{	
    int n;
	int sum;
while(scanf("%d",&n)&&n!=0)
{
	 
	printf("%d\n",f(n));
    
}
    return 0;	
}

/*

#include<iostream>
#include<fstream>
using namespace std;


 int a[100]={0,1}; //a[i]��i��������  a[0]������ 

//�����ʵ���ǣ�����ţ������Ϳ�ʼ��ͬһ������  ԭ����ĵ�1�������ţ��������һ��
  
int func(int year)
{
    if(year<4) //ֻ��1ͷţʱ ͷ����ֻ��ԭ����ĸţ1ͷ 
	{
	    return 1;
	}
   else  
   {
    // func(year-3) ����ĸţ1ͷ ��Ϊǰ����ֻ��1ͷĸţ   func(year-1)�ڶ���ţ����û1���1ͷ
      return (func(year-3)+func(year-1)); 
   }
}
int main(int argc, char* argv[])
{
      ifstream in("a.txt");
	  int n;
	  while(in>>n)
	  {
	   cout<<  func(n)<<endl;
	  }
      
	return 0;
}



*/