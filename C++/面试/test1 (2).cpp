//进程管理
#include <windows.h> 
#include <iostream> 
using namespace std;

DWORD WINAPI FunOne(LPVOID param){
  while(true)
  {
    Sleep(1000);
    cout<<"hello! "<<endl;
  }
  return 0;
} 
DWORD WINAPI FunTwo(LPVOID param){
  while(true)
  {
    Sleep(1000);
    cout<<"world! "<<endl;;
  }
  return 0;
}

int main(int argc, char* argv[])
{
  int input=0;
  DWORD lp1=0,lp2=0;
  
  HANDLE hand1=CreateThread (NULL, 0, FunOne, (void*)&input, CREATE_SUSPENDED, &lp1);
  HANDLE hand2=CreateThread (NULL, 0, FunTwo, (void*)&input, CREATE_SUSPENDED, &lp2);
  while(true){
    cin>>input;
    if(input==1) 
    {
		ResumeThread(hand1);
		ResumeThread(hand2);
    }
    if(input==2)
    {
		SuspendThread(hand1);
		SuspendThread(hand2);
    }
	if(input==0)
	{
		TerminateThread(hand1,1);
        TerminateThread(hand2,1);
	}
    if(input==9)
       return 0;
  };
  return 0;
}