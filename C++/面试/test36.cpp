//ջA������1��2��3��4��ջBΪ�գ����ñ�Ŀռ䣬��A�е����ݵ�˳����4��3��2��1
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
//����ݹ�����þ��������ᵽ�İ�Ԫ�ؽ��еߵ�
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
 //����ݹ�����þ��������ᵽ�İ�Ԫ�ؽ��еߵ�
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