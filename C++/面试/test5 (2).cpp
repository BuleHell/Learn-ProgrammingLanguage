//*********************C++����**************************** 
//*File Name:            �ļ���
//*Program Assignment :  ���ļ������� 
//* Author:              �����  
//* Date:                ��2013/8/6  14:34�� 
//* Description:         �����ļ���������
//********************************************************
#include <iostream>
using namespace std;
class A
{
public:
    A(){
    cout<<"���ǹ��캯��";
    }
    ~A(){
    cout<<"������������";
    }
};


int main(int argc, char *argv[])
{
    A *a=new A();
  
    return 0;
}
