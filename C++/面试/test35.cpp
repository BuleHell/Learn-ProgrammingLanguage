#include <iostream>
using namespace std;

int n,m,k;
int C[55][55];
int K[55*55];
int count=0;
//int fun(int m,int n,int k);
int main(int argc, char *argv[])
{

	cin>>n;
	cin>>m;
	cin>>k;
	for (int i=0;i<n ;i++ )
	{
		for (int j=0;j<m ;j++ )
		{
			cin>>C[i][j];
		}
	}
//获得所有数据，开始运算
int now=C[0][0];
for (int i=0;i<n ;i++ )
	{
		for (int j=0;j<m ;j++ )
		{
			if(C[i][j]>=now)
			{
			 count++;
			 now=C[i][j];
			
			}
		}
	}
	
	int b1=1;
	int k1=k;
	int k2=k;
	int b2=1;
	while ((--k1)!=0)
	{
	 b1*=(count-k1);
	}
	while ((--k2)!=1)
	{
	 b2*=k2;
	}

	int bb=b1/b2;
	cout<<bb;
	
	return 0;
}
//int fun(int m,int n,int k)
//{
  //int now =C[m-1][n];






//}
