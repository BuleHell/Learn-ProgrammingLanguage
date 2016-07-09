#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
string exp;
int Mystrstr(char*str,char a);
int  getoutofblank(char *a);
int main(int argc, char *argv[])
{
	cin>>exp;
	int len=exp.length();
	char *exp2=new char[len+1];
	int i=0;
    i=len;
	while (i--)
	{
		exp2[i]=exp[i];
		 
	}
	exp2[len]='\0';
	cout<<exp2;
    Mystrstr(exp2,'*');
	//cout<<isdigit('r');  //1:shu×Ö 0:bushi
	while( Mystrstr(exp2,'*')||Mystrstr(exp2,'/'))
	{
		int a=Mystrstr(exp2,'*')<Mystrstr(exp2,'/')?Mystrstr(exp2,'*'):Mystrstr(exp2,'/');
		if(exp2[a]=='*')
		{
			exp2[a]=((exp2[a-1]-'0')*(exp2[a+1]-'0'))+'0';
			exp2[a-1]=exp2[a+1]=' ';
		}
		if(exp2[a]=='/')
		{
			exp2[a]=((exp2[a-1]-'0')/(exp2[a+1]-'0'))+'0';
			exp2[a-1]=exp2[a+1]=' ';
		}
		getoutofblank(exp2);
	
	}
	while( Mystrstr(exp2,'+')||Mystrstr(exp2,'-'))
	{
		int a=Mystrstr(exp2,'+')<Mystrstr(exp2,'-')?Mystrstr(exp2,'+'):Mystrstr(exp2,'-');
		if(exp2[a]=='+')
		{
			exp2[a]=((exp2[a-1]-'0')+(exp2[a+1]-'0'))+'0';
			exp2[a-1]=exp2[a+1]=' ';
		}
		if(exp2[a]=='/')
		{
			exp2[a]=((exp2[a-1]-'0')-(exp2[a+1]-'0'))+'0';
			exp2[a-1]=exp2[a+1]=' ';
		}
		getoutofblank(exp2);
	
	}

	delete[] exp2;
	return 0;
}


int Mystrstr(char*str,char a)
{
	int i=0;
	while (a!=str[i])
	{
	  i++;
	  if(i>strlen(str))return -1;
	}
	return i;
}

int  getoutofblank(char *a)
{
//while(a*!='')
	


}