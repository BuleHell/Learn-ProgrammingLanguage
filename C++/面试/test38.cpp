#include <iostream>
#include<string.h>
using namespace std;
const int MAX=100;
int main(int argc, char *argv[])
{
	int a;
	string b;
	cin>>a;
	while (a--)
	{
		cin>>b;
		int len=b.length();
		int i=0;
		while (i<len)
		{	
			if(b[i]=='#'&&(i-1>=0))
			{
				if(b[i-1]!=' ')
				{
					b[i-1]=' ';
					b[i]=' ';
					i--;
				}
				else
				{
				b[i]=' ';
				int j=i-1;
				while(b[j]==' ')j--;
				b[j]=' ';
				
				}
			
			
			}
			if(b[i]=='@'&&(i-1>=0))
			{
			
				for (int k=0;k<=i;k++ )
				{
					b[k]=' ';
				}
			
			}
			i++;
		}
		for (int i=0;i<len ;i++ )
		{
			if(b[i]!=' ')cout<<b[i];
		}
		cout<<endl;
	}
	return 0;
}
