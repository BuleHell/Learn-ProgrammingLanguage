//栈A有数据1、2、3、4，栈B为空，不用别的空间，将A中的数据的顺序变成4、3、2、1
#include <iostream>
#include<stack>
using namespace std;
stack<int> A,B;
int main(int argc, char *argv[])
{
	for (int i=1;i<=4 ;i++ )
	{
		A.push(i);
	}


	
	return 0;
}

//void reverseStack(Stack stack)
//{
  //if (!stack.empty())
  //{
   //Object t = stack.pop();
   //reverseStack(stack);
   //PushStack(stack,t);
  //}
 //}
//这个递归的作用就是上面提到的把元素进行颠倒
 //public static void PushStack(Stack stack,Object t)
 //{
  //if (stack.empty()){
   //stack.push(t);
  //}else{
   //Object top = stack.pop();
   //PushStack(stack,t);
   //stack.push(top);
  //}
 //}
 /*
 //这个递归的作用就是上面提到的把元素进行颠倒
 public static void PushStack(Stack stack,Object t){
  if (stack.empty()){
   stack.push(t);
  }else{
   Object top = stack.pop();
   PushStack(stack,t);
   stack.push(top);
  }
 }
 
 
 
 
 
 */