#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
const int maxn=1000;

struct bign
{
	int len;
	int s[maxn];
	bign()
	{
		memset(s,0,sizeof(s));
		len=1;
	}

	//¸³ÖµÓï¾ä
	bign operator = (const char*num)
	{
		len=strlen(num);
		for (int i=0;i<len ;i++ )
		{
			s[i]=num[len-1-i]-'0';
		}
		return *this;
	}
	//
	bign operator = (const int num)
	{
		char s[maxn];
		sprintf(s,"%d",num);
		*this=s;
		return *this;
	}

	string str()const
	{
		string res="";
		for (int i=0;i<len ;i++ )
		{
			res=(char)(s[i]+'0')+res;

		}
		
		if(res=="")res="0";
		return res;
	}

};






int main(int argc, char *argv[])
{
	
	
	return 0;
}
