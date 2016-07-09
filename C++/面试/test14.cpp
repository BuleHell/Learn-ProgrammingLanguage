#include <iostream>
#include <string>
#include<stdio.h>
using namespace std;

int main()
{
	char s[128];
	char *Ptr;
	int  Count;
	gets(s);

	Ptr = s;
	if (Ptr==NULL)
	{
		return -1;
	}
	Count = 0;
	while (*Ptr)
	{
		if (*Ptr==' ')
		{
			Count = 0;
			Ptr++;
		}
		else
		{
			Count +=1;
			Ptr ++;
		}
	}
	cout<<Count<<endl;
	return Count;
}