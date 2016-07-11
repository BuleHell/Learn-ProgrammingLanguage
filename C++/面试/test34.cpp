#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void f(int *a,int len)
{
int top=0;
int tail=len-1;
while (top<tail)
{
	if(a[top]<0)top++;
	else if(a[top]>0)
	{
		while (a[tail]>0)
		{
			tail--;
		}
		//½»»»
		{
			  
			int tmp=a[top];
			a[top]=a[tail];
			a[tail]=tmp;
		}
	}
	else
	{
		while (a[tail]>0)
		{
			tail--;
		}
			int tmp=a[top];
			a[top]=a[tail];
			a[tail]=tmp;
			top++;
	}

}


}

int main(int argc, char *argv[])
{
//	cout<<"Hello, world\n";
	int a[11]={1,-2,-3,32,0,0,-2,-5,-45,-43,10};
	// 	int a[10]={0,0,0,0,0,0,0,0,0,0};
	//int a[10]={-2,-3,-5,-6,-75,-6,-54,-6,-543,-65};
	//int a[10]={1,2,3,4,3,32,5,43,6,435};
	
	for (int i=0;i<11 ;i++ )
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	f(a,11);
		for (int i=0;i<11 ;i++ )
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;


	return 0;
}

