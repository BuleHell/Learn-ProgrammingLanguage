#include<iostream>
#include<stdlib.h>
using namespace std;
void move(char a,char c);
void hanno(int n,char a,char b,char c);
int count;
int main()
{	count=0;
	int m;
	cout<<"enter the number: ";
	cin>>m;
	hanno(m,'A','B','C');
	cout<<count;
	system("pause");

	return 0;
}
void move(char a,char c)
{
	//cout<<a<<"->"<<c<<endl;
	count++;
}
void hanno(int n,char a,char b,char c)
{
	
	if(n==1)
	 move(a,c);
	else
	{
		hanno(n-1,a,c,b);
		move(a,c);
		hanno(n-1,b,a,c);
	}
}

