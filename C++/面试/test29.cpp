#include <iostream>
using namespace std;
#define MAXN 3000
int f[MAXN];

int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	f[0]=1;
	for (int i=2;i<=n ;i++ )
	{
		int c=0;
		for (int j=0;j<MAXN ;j++ )
		{
			int s=f[j]*i+c;
			f[j]=s%10;
			c=s/10;
		//	if(c==0)break;
		}
	}
	int k=MAXN+1;

	while (k--)
	{
		if( f[k]) 
		{
		  k++;
		  break;
		
		}
	}

	while (k--)
	{
		cout<<f[k];
	}
	cout<<endl;
	return 0;
}
