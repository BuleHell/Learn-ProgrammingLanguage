//*********************C++语言**************************** 
/*

A + B Problem II

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 269012    Accepted Submission(s): 51981


Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.
 

Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
 

Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
 

Sample Input
2
1 2
112233445566778899 998877665544332211
 

Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
 

Author
Ignatius.LA + B Problem II

Time Limit: 2000/1000 MS (Java/Others)    Memory Limit: 65536/32768 K (Java/Others)
Total Submission(s): 269012    Accepted Submission(s): 51981


Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.
 

Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.
 

Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.
 

Sample Input
2
1 2
112233445566778899 998877665544332211
 

Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110
 

Author
Ignatius.L
*/
//********************************************************
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len1,len2,j,k,pi,t,flag;
    char str1[1010],str2[1010];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a[1200]={0};
        flag=0;
        printf("Case %d:\n",i);
        scanf("%s%s",str1,str2);//以字符串形式读入
        len1=strlen(str1);
        len2=strlen(str2);
        printf("%s + %s = ",str1,str2);
        j=len1-1;
        k=len2-1;
        pi=0;
        while(j>=0&&k>=0)//开始相加
        {
            if(a[pi]+(str1[j]-'0')+(str2[k]-'0')>=10)//相加后大于10的
            {
                a[pi]=a[pi]+(str1[j]-'0')+(str2[k]-'0')-10;
                a[pi+1]++;
            }
            else
                a[pi]=a[pi]+(str1[j]-'0')+(str2[k]-'0');
            pi++;
            k--;
            j--;
        }
        if(j>=0)
        {
            for(t=j;t>=0;t--)
            {
                a[pi]=a[pi]+(str1[t]-'0');
                pi++;
            }
        }
        else if(k>=0)
        {
            for(t=k;t>=0;t--)
            {
                a[pi]=a[pi]+str2[t]-'0';
                pi++;
            }
        }
        else if(a[pi]!=0)//对于位数相同2个数加后最高位大于10的
            pi++;
        for(t=pi-1;t>=0;t--)
        {
            if(a[t]==0&&flag==0)//处理一次啊前导0，估计属于无用的一步
                continue;
            else
            {
                flag=1;
                printf("%d",a[t]);
            }
           
        }
        printf("\n");
        if(i!=n)//对于2组之间加空行的情况
            printf("\n");
    }
    return 0;   
}