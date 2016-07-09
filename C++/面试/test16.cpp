#include <iostream>
#include<string.h>
using namespace std;
void stringZip(const char *pInputStr,long lInputStr,char*pOutputStr)
{
int i=0,j=0;
int count=1;
int len=strlen(pInputStr)+1;
int *p=new int [len];//记录相应的值
memset(p,0,sizeof(p));//清零
cout<<pInputStr<<endl<<endl;
while(pInputStr[i]!='\0')
{
	while( pInputStr[i]==pInputStr[i+1])
	{
		count++;
		i++;
			
	}
	//有重复的
	if(count>1)
	{
		//如果大于10
		int tmp_num=count;
		int size=0;
		while(count)
		{ 	 
			size++;
			count/=10;
			
		}
		//cout<<size;
		//cout<<" "<<tmp_num<<endl;
		count=1;
		for(int k=size;k>0;k--)
		{
			
			pOutputStr[j+k-1]='0'+tmp_num%10;
			//cout<<pOutputStr[i+k-1];
			//cout<<endl;
			tmp_num/=10;
		}
		//cout<<size;
		j=j+size ;
		
		///////
		pOutputStr[j]=pInputStr[i];
		i++;
		j++;
		count=1;
	}
	else
	{
		pOutputStr[j]=pInputStr[i];
		i++;
		j++;
	}
}
pOutputStr[j]='\0';


}




int main(int argc, char *argv[])
{
	
   char a[]="zzzzzzzzzzzzzzzzzzzzzzzzzttttlllljjjjfffnnndddiiiftrpppv";
      int len=strlen(a)+1;
   char *p=new char[len];
	stringZip(a,len,p);
	cout<<p<<endl;
	return 0;
}
