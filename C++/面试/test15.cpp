#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

bool g_flag[26];
void stringFilter(const char * pInputStr,long lInputLen,char *pOutputStr)
{
	int i=0;
	if( pInputStr==NULL) return;
	if(pInputStr==NULL||lInputLen<=1)
	{
		return;
	}
	
	const char *p=pInputStr;
	while(*p!='\0')
	{
		if(g_flag[(*p-'a')])
		{
			p++;
		}else
		{
			pOutputStr[i++]=*p;
			g_flag[*p-'a']=1;
			p++;
		}

	}
	pOutputStr[i]='\0';



}

int main()
{
   memset(g_flag,0,sizeof(g_flag));
   char a[]="dshasfkhdsajk";
   int len=strlen(a)+1;
   char *p=new char[len];
  stringFilter(a,len,p);
  cout<<p<<endl;
return 0;
}