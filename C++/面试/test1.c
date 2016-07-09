/*
题目描述
有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？

输入
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。

输出
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。

样例输入
2
4
5
0
样例输出
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


 int a[100]={0,1}; //a[i]第i代的数量  a[0]总数量 

//问题的实质是：从新牛出生起就开始了同一个问题  原问题的第1年就是新牛出生的那一年
  
int func(int year)
{
    if(year<4) //只有1头牛时 头三年只有原本的母牛1头 
	{
	    return 1;
	}
   else  
   {
    // func(year-3) 是老母牛1头 因为前三年只有1头母牛   func(year-1)第二代牛数量没1年产1头
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