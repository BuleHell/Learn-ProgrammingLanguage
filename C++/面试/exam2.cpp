//*********************第二题**************************** 
/*
"wang fei",
"zhang man yu",
"zhang zhi yi",
"li li",
"li xiao man",
"li yu cun",
"yang ni",
"xiao tong",
"li lei",
"zhang san"
 
//
li si


*/
#include <iostream>
#include <string>
#include<stdio.h>
#include <algorithm>
using namespace std;
const string womans[]={"wang fei",
"zhang man yu",
"zhang zhi yi",
"li li",
"li xiao man",
"li yu cun",
"yang ni",
"xiao tong",
"li lei",
"zhang san"};
const int woman_len=10;
int pipei[woman_len];
int letter[26];


int main(int argc, char *argv[])
{
	string man;
	cin>>man;
	//
	
	string woman;
	for (int i=0;i< woman_len; i++)
	{
		woman=womans[i];
		//知道匹配
		for (int j=0;j<woman.length() ;j++ )
		{
			//
			if(woman[j]==' ')continue;
			else
			for (int k=0;k<man.length() ;k++ )
			{
				if(man[k]==' ')continue;
				if(woman[j]==man[k]&&man[k]!=' '&&woman[j]!=' ') letter[woman[j]-'a']=1;
			}
		}
		int tmp=0;
		for (int l=0;l<26 ;l++ )
		{
			tmp+=letter[l];
			letter[l]=0;
			
		}
		cout<<tmp<<" ";
		//输入匹配值
		pipei[i]=tmp;

	}

	int max_index=0;
	for (int i2=0;i2<26 ;i2++ )
	{
		if(pipei[i2]>pipei[max_index]) max_index=i2;
	}
	cout<<womans[max_index]<<endl;
	return 0;
}