/*
��ʦ��֪����ĳĳͬѧ���У�������ߵ��Ƕ��٣�����������ģ����ʦ��ѯ�ʡ���Ȼ����ʦ��ʱ����Ҫ����ĳλͬѧ�ĳɼ�. 
��������:

�����������������ݡ�
ÿ�������һ��������������N��M��0 < N <= 30000,0 < M < 5000��,�ֱ����ѧ������Ŀ�Ͳ�������Ŀ��
ѧ��ID��Ŵ�1�ൽN��
�ڶ��а���N��������������N��ѧ���ĳ�ʼ�ɼ������е�i��������IDΪi��ѧ���ĳɼ�
��������M�У�ÿһ����һ���ַ�C��ֻȡ��Q����U������������������A,B,��CΪ'Q'��ʱ��, ��ʾ����һ��ѯ�ʲ�������ѯ��ID��A��B������A,B����ѧ�����У��ɼ���ߵ��Ƕ���
��CΪ��U����ʱ�򣬱�ʾ����һ�����²�����Ҫ���IDΪA��ѧ���ĳɼ�����ΪB��


�������:

����ÿһ��ѯ�ʲ�������һ�����������߳ɼ�.

��������:

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
