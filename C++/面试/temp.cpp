#include <iostream>
#include <string>
using namespace std;
int main(int argc,char **argv)

{

string in;
getline(cin,in);

//for (int i=0;i<in.length() ;i++ )
//{
	//cout<<in[i];
//}
int pos = in.find_last_of(' ');
int pos2=in.find(' ',4);
cout<<pos2;
//cout<<in.length()-pos-1 ;
return 0;

}
/*
    最近参加笔试，感觉排序算法需要好好的整理一下，感觉部分排序算法理解得不是很清楚；通过这段时间的整理与总结来对排序算法的一个复习吧。

        主要参考了《大话数据结构》：
1. 冒泡排序的基本思想：两两比较相邻记录的关键字，如果反序则交换，直到没有反序的记录为止。

[cpp] view plaincopy
#define length 10  
  
void swap(int *a,int *b)  
{  
    int temp;  
    temp=*a;  
    *a=*b;  
    *b=temp;  
}  
/*采用冒泡排序，是数据从小到大排列*/  
void BubbleSort0(int a[],int len)    
{  
    int i,j;  
    for (i=0;i<len;i++)  
    {  
        for (j=i+1;j<len;j++)  
        {  
            if (a[i]>a[j])  
                swap(&a[i],&a[j]);  
        }  
    }  
}  
冒泡算法的改进1，主要讲相邻两个数比较
[cpp] view plaincopy
void BubbleSort1(int a[],int len)  
{  
    int i,j;  
    for (i=0;i<len;i++)  
    {  
        for(j=len-2;j>=i;j--)  
        {  
            if (a[j]>a[j+1])    //前者与后者比较，这里与前面算法的区别  
                swap(&a[j],&a[j+1]);  
        }  
    }  
}  
冒泡算法的进一步优化，使用一个标志位来记录是否有数据的交换，如果数据有交换，则将标志flag赋值为true
[cpp] view plaincopy
void BubbleSort2(int a[],int len)  
{  
    int i,j;  
    int flag=1;  
    for (i=0;i<len &&flag;i++)  
    {  
        flag=0;  
        for (j=len-2;j>=i;j--)  
        {  
            if (a[j]>a[j+1])  
            {  
                swap(&a[j],&a[j+1]);  
                flag=1;  
            }  
        }  
    }  
}  
冒泡排序复杂度分析：当最好的情况（序列已经有序），根据最后的改进的代码，只有n-1次的比较，没有数据之间的交换，时间复杂度为O(n);当最坏的情况下（序列为逆序），此时需要比较n(n-1)/2，并且还需要进行等数量级的记录移动，因此总的时间复杂度为O(n^2)
2.简单选择排序
简单选择排序：就是通过n-i次关键字间的比较，从n-i+1个记录中选出关键字最小的记录，并和第i个记录交换：

[cpp] view plaincopy
void SelectSort(int a[],int len)  
{  
    int i,j,min;  
    for (i=0;i<len;i++)  
    {  
        min=i;  
        for (j=i+1;j<len;j++)  
        {  
            if (a[min]>a[j])  
                min=j;  
        }  
        if (i!=min)  
            swap(&a[min],&a[i]);  
    }  
}  
简单选择排序复杂度分析：它的比较次数一定：n(n-1)/2。也因此无论在序列何种情况下，它都不会有优秀的表现，可见对数据的有序性不敏感。它虽然比较次数多，而对于交换次数而言，当最好的时候，交换为0次，最坏的时候交换次数为n-1次，所以数据交换量却很少，基于时间复杂度是比较与交换次数的总和，因此总的时间复杂度依然为O(n^2)。尽管与冒泡排序算法的时间复杂度相同，但是简单选择排序的性能上还是略优于冒泡排序。
3.直接插入排序
直接插入排序的基本操作是将一个记录插入到已经排好序的有序表中，从而得到一个新的记录数增1的有序表

[cpp] view plaincopy
void InsertSort(int a[],int len)  
{  
    int i,j,temp;  
    for (i=1;i<len;i++)  
    {  
        if (a[i]<a[i-1])  
        {  
            temp=a[i];  
            for (j=i-1;a[j]>temp;j--)  
                a[j+1]=a[j];  
            a[j+1]=temp;  
        }  
    }  
}  
直接插入排序复杂度分析：每次比较后最多移掉一个逆序，因此与冒泡排序的效率相同。但它在速度上还是要高点，这是因为在冒泡排序下是进行值交换，而在插入排序下是值移动，所以直接插入排序将要优于冒泡排序。直接插入法也是一种对数据的有序性非常敏感的一种算法。在有序情况下只需要经过n-1次比较，由于每次都是a[j]>a[j-1]因此没有移动记录，时间复杂度为O(n);在最坏情况下，将需要(n+2)(n-1)/2次比较,并且将移动次数也达到最大值(n+4)(n-1)/2。如果排序记录是随机的，根据概率相同原则，平均比较和移动次数约为你(n^2)/4,所以直接插入排序的时间复杂度为O(n^2).
4.希尔排序

希尔排序的基本思想：先将整个待排记录序列分割成为若干子序列分别进行直接插入排序，并使整个序列中的记录基本有序，再对全体记录进行一次排序。

[cpp] view plaincopy
/*主要利用插入排序的思想*/  
void ShellSort(int a[],int len)  
{  
    int i,j,temp,increment;  
    increment=len;  
    do  
    {  
        increment=increment/3+1;  
        for (i=increment;i<len;i++)  
        {  
            if(a[i]<a[i-increment])  
            {  
                temp=a[i];  
                for (j=i-increment;j>=0&&a[j]>temp;j-=increment)   
                {  
                    a[j+increment]=a[j];  
                }  
                a[j+increment]=temp;  
            }  
        }  
    }while(increment>1);  
}  


希尔排序复杂度分析：希尔排序的“增量”的选取非常关键，大量的研究表示，当增量序列为2^(t-k+1)-1(0=<k=<t=<log2(n+1))时，可以获得不错的效果，其时间复杂度为O(n^1.5)。增量的选择将影响希尔排序的效率。但是无论怎样选择增量，最后一定要使增量为１，进行一次直接插入排序。但它相对于直接插入排序，由于在子表中每进行一次比较，就可能移去整个经性表中的多个逆序，从而改善了整个排序性能。希尔排序算是一种基于插入排序的算法，所以对数据有序敏感。

5.堆排序

堆排序的思想：首先将待排序列构建为大顶堆(大顶堆：每个结点的值大于或等于其左右孩子结点的值)。此时整个序列的最大值就是堆顶的根结点。将它移走（其实就是讲其与堆数组的末尾元素交换，此时末尾元素就是最大值），然后将剩余的n-1个子序列重新构造成一个堆，这样就会得到n个元素中的次大值。如此反复执行，便得到一个有序序列。

[cpp] view plaincopy
void HeapAdjust(int a[],int s,int m)  
{  
    int temp,j=0;  
    temp=a[s];  
    for (j=2*s+1;j<m;j=j*2+1)     
    {  
        if (j<m && a[j]<a[j+1])  
            ++j;  
        if (j<m && temp>=a[j])  
            break;  
        a[s]=a[j];  
        s=j;  
    }  
    a[s]=temp;  
}  
[cpp] view plaincopy
void HeapSort(int a[],int len)  
{  
    int i;  
    for (i=(len)/2-1;i>=0;i--)  
        HeapAdjust(a,i,len);  
    for (i=len-1;i>=1;i--)  
    {  
        swap(&a[0],&a[i]);  
        HeapAdjust(a,0,i-1);  
    }  
}  


堆排序的复杂度分析：在构建堆的过程中，因为是完全二叉树从最下层最后边的非终端结点开始构建，将它与其孩子进行比较和若有必要的交换，对于每个非终端结点来说，其中最多进行两次比较和互换操作，因此整个构建堆的时间复杂度为O(n)。

    在正式排序时，第i次取堆顶记录重建堆需要用O(logi)的时间（完全二叉树的某个结点到根节点的距离为[logi]+1），并且需要取n-1次堆顶记录，因此重建堆的时间复杂度为O(nlogn)。

    所以总体来说，堆排序的时间复杂度为O(nlogn)。由于堆排序对原始记录的排序状态并不敏感，因此无论最好、最坏平均时间复杂度均为O(nlogn)。所以一般在小规模的序列中不合适，但对于较大的序列，将表现出优越的性能。

6.归并排序
归并排序思想：假设初始序列含有n个记录，则可以看成是n个有序的子序列，每个子序列的长度的长度为1，然而两两归并，得到[n/2]([x]表示不小于x的最小整数)个长度为2或1的有序子序列；再两两归并,.....,如此重复，直至得到一个长度为n的有序序列为止。

[cpp] view plaincopy
/*将有序的SR归并到TR中*/  
void Merge(int SR[],int TR[],int i,int m,int n)  
{  
    int j,k,l;  
    for (j=m+1,k=i;i<=m && j<=n;k++)  /*对1...m与m+1...n中等长的数组比较大小，并且保存较小元素*/  
    {  
        if (SR[i]<SR[j])  
            TR[k]=SR[i++];  
        else   
            TR[k]=SR[j++];  
    }  
    if (i<=m)  /*将SR[1...m]中多余中的部分添加到TR中*/  
    {  
        for (l=0;l<=m-i;l++)  
            TR[k+l]=SR[i+l];  
    }  
    if (j<=n)    /*将SR[m+1...n]中多余中的部分添加到TR中*/  
    {  
        for (l=0;l<=n-j;l++)  
            TR[k+l]=SR[j+l];  
    }  
}  
/*将SR归并排序为TR1*/  
void MSort(int SR[],int TR1[],int s,int t)  
{  
    int m=0;  
    int TR2[length+1]={0};  
    if (s==t)  
        TR1[s]=SR[s];  
    else  
    {  
        m=(s+t)/2;  
        MSort(SR,TR2,s,m);  
        MSort(SR,TR2,m+1,t);  
        Merge(TR2,TR1,s,m,t);  
    }  
}  

归并排序复杂度分析：一趟归并需要将SR[0]~SR[n-1]中相邻的长度为h的有序序列进行两两归并。并将结果放到TR[0]~TR[n-1]中，这需要将待排序列中的记录扫描一遍，因此耗费O(n)时间，而由完全二叉树的深度可知，整个归并排序需要进行[log(n)]次，因此，总的时间复杂度为O(nlogn)，而且这是归并排序算法中最好、最坏、平均的时间性能。并且归并排序是一种稳定的排序算法。对数据的有序性不敏感。若数据节点数据量大，那将不适合。但可改造成索引操作，效果将非常出色。
对于归并排序的非递归实现在此就不在说明。

7.快速排序

快速排序的思想：通过一趟排序将待排记录分割成独立的两部分，其中一部分记录的关键字均比另一部分记录的关键字小，则可分别对这两部分记录继续进行排序，以达到整个序列有序的目的。


[cpp] view plaincopy
int Partiton(int a[],int low,int high)  
{  
    int pivotkey;  
    pivotkey=a[low];//枢轴的选取可以选取中间值  
    while (low<high)  
    {  
        while (low<high &&a[high]>=pivotkey)  
            high--;  
        swap(&a[high],&a[low]);  
        while (low<high && a[low]<=pivotkey)  
            low++;  
        swap(&a[high],&a[low]);  
    }  
    return low;  
}  
  
int Partiton1(int a[],int low,int high)/*y优化不需要的交换*/  
{  
    int temp,pivotkey;  
    pivotkey=a[low];  
    temp=pivotkey;  
    while (low<high)  
    {  
        while (low<high &&a[high]>=pivotkey)  
            high--;  
        a[low]=a[high];  
        while (low<high && a[low]<=pivotkey)  
            low++;  
        a[high]=a[low];  
    }  
    a[low]=temp;  
    return low;  
}  
  
void Qsort(int a[],int low,int high)  
{  
    int pivot;  
    if (low<high)  
    {  
        pivot=Partiton1(a,low,high);  
        Qsort(a,low,pivot-1);  
        Qsort(a,pivot+1,high);  
    }  
  
}  
快速排序复杂度分析：它同样是冒泡排序的改进，它通过一次交换能消除多个逆序，这样可以减少逆序时所消耗的扫描和数据交换次数。在最优情况下，它的排序时间复杂度为Ｏ(nlog2n)。即每次划分序列时，能均匀分成两个子串。但最差情况下它的时间复杂度将是Ｏ(n^2)。即每次划分子串时，一串为空，另一串为m-1（如果程序中采用每次取序列中部数据作为划分点，那将在正序和逆时达到最优）。有的书上这解释“快速排序”，在理论上讲，如果每次能均匀划分序列，它将是最快的排序算法，因此称它作快速排序。虽然很难均匀划分序列，但就平均性能而言，它仍是基于关键字比较的内部排序算法中速度最快者。
按平均时间将排序分为类： 
(1) 平方阶(O(n2))排序
　　各类简单排序，例如直接插入、简单选择和冒泡排序； 
(2) 线性对数阶(O(nlog2n))排序
　　如快速排序、堆排序和归并排序； 
(3) O(n1+§))排序
　　§是介于0和1之间的常数。希尔排序便是一种；


排序方法的选择

因为不同的排序方法适应不同的应用环境和要求，所以选择合适的排序方法很重要
(1)若n较小，可采用直接插入或直接选择排序。
当记录规模较小时，直接插入排序较好，它会比选择更少的比较次数；
但当记录规模较大时，因为直接选择移动的记录数少于直接插人，所以宜用选直接选择排序。
这两种都是稳定排序算法。
(2)若文件初始状态基本有序(指正序)，则应选用直接插人、冒泡或随机的快速排序为宜(这里的随机是指基准取值的随机，原因见上的快速排序分析)；这里快速排序算法将不稳定。
(3)若n较大，则应采用时间复杂度为O(nlog2n)的排序方法：快速排序、堆排序或归并排序序。
快速排序是目前基于比较的内部排序中被认为是最好的方法，当待排序的关键字是随机分布时，快速排序的平均时间最短；
堆排序虽不会出现快速排序可能出现的最坏情况。但它需要建堆的过程。这两种排序都是不稳定的。
　 归并排序是稳定的排序算法，但它有一定数量的数据移动，所以我们可能过与插入排序组合，先获得一定长度的序列，然后再合并，在效率上将有所提高。
*/
