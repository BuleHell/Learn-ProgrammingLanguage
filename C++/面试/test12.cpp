
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	for (int i=1000;i<100000 ;i++ )
	{
		int j=0;
		int t=i;
		while (t!=0)
		{
			j=j*10+t%10;
			t=t/10;
		}
		if((i<<2)==j)
		{
		cout<<i;
		break;
		
		}		

	}
	return 0;
}
