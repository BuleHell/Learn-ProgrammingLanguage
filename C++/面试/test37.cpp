#include <iostream>
using namespace std;
int f(int a)
{
	if(a==1)return 1;
	else
	 return (f(a-1)+1)*2;

}

int main(int argc, char *argv[])
{
	cout<<f(3);
	return 0;
}
