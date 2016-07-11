#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(int argc, char *argv[])
{

int b;
cin>>b;
int *a=new int(b);
for (int i=0;i<b ;i++ )
{
	cin>>a[i];
}
int count=0;
for (int i=0;i<b;i++ )
{
	 count+=a[i]*a[i]*3.14;
	 if(count>40)
	 { 
	   cout<<i;
	   return 0;
	 }
}



	return 0;
}
