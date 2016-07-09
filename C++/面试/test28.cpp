#include <iostream>
#include<stdio.h>
#include <cmath>
using namespace std;
double X1,X2;
double Y1,Y2;
int main(int argc, char *argv[])
{
	while(scanf("%lf%lf%lf%lf",&X1,&Y1,&X2,&Y2)==4)
	{
		printf("%.2f\n",sqrt(((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2))));
	}
	
	return 0;
}

//
//	baidu
//s7t9zL
//#include<stdio.h>
//#include<math.h>
//int main()
//{
    //double a[2],b[2],l;
    //while(scanf("%lf%lf%lf%lf",a,b,a+1,b+1)==4)
    //{
        //l=sqrt((a[1]-a[0])*(a[1]-a[0])+(b[1]-b[0])*(b[1]-b[0]));

        //printf("%.2f\n",l);
    //}
    //return 0;
//}