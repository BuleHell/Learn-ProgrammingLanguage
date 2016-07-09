#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
/*
2
0  0
0  3


*/
int n;
int l;
struct point
{
	int x;
	int y;
};
point bottom={0,0},top={0,0};
int main(int argc, char *argv[])
{ 	while(scanf("%d",&n)==1)
	{	
		point tmp;
		while (n--)
		{
			scanf("%d%d",&tmp.x,&tmp.y);
			//cout<<tmp.x<<" "<<tmp.y;
			if((tmp.x<bottom.x)||(tmp.y<bottom.y)) {
			bottom.x=tmp.x;
			bottom.y=tmp.y;
			
			}
			if((tmp.x>top.x)||(tmp.y>top.y)) {
			top.x=tmp.x;
			top.y=tmp.y;
			
			}
		}
		
		int max=(top.x-bottom.x)>(top.y-bottom.y)?(top.x-bottom.x):(top.y-bottom.y);
		cout<<max*max<<endl;
	}
	cout<<endl;
	
	return 0;
}
