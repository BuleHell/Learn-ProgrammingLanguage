/*
老师想知道从某某同学当中，分数最高的是多少，现在请你编程模拟老师的询问。当然，老师有时候需要更新某位同学的成绩. 
输入描述:

输入包括多组测试数据。
每组输入第一行是两个正整数N和M（0 < N <= 30000,0 < M < 5000）,分别代表学生的数目和操作的数目。
学生ID编号从1编到N。
第二行包含N个整数，代表这N个学生的初始成绩，其中第i个数代表ID为i的学生的成绩
接下来又M行，每一行有一个字符C（只取‘Q’或‘U’），和两个正整数A,B,当C为'Q'的时候, 表示这是一条询问操作，他询问ID从A到B（包括A,B）的学生当中，成绩最高的是多少
当C为‘U’的时候，表示这是一条更新操作，要求把ID为A的学生的成绩更改为B。


输出描述:

对于每一次询问操作，在一行里面输出最高成绩.

输入例子:

5 7
1 2 3 4 5
Q 1 5  //5 
U 3 6  //1 2 6 4 5
Q 3 4   //6
Q 4 5     //5
U 4 5     //1 2 6 5 5
U 2 9      //1 9 6 5 5
Q 1 5     //9







*/

#include <iostream>
#include<stdio.h>
#include <algorithm>
using namespace std;
int grade[30000+1];
int result[30000+1];
int N,M;
int index=0;

int main(int argc, char *argv[])
{
	
	while(scanf("%d%d",&N,&M)==2)
	{
		for(int i=1;i<=N;i++)
		{
			scanf("%d",&grade[i]);
		}
		 
 

		char op;
		int a,b;
		for (int i=0;i<M ;i++ )
		{
			scanf(" %c%d%d",&op,&a,&b);
			 
			//cout<<op<<a<<b;

			//cout<<"op:"<<op<<endl;
			//<<"a:"<<a<<"B:"<<b;
			if(op=='U')
			{
				
				grade[a]=b;
			
			}
			if(op=='Q')
			{	if(a>b)swap(a,b);
			    int max=grade[a];
				for (int i=a;i<=b ;i++ )
				{
					if(grade[i]>max) max=grade[i];
				}

				 //result[index++]=max;
				cout<<max<<endl;
			
			}
			
		}
	cout<<endl;


 
	
	
	
	}

	
	return 0;
}
