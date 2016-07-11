#include <iostream>
using namespace std;

class A
{
 public :
	virtual void a(){}
	virtual void b(){}
};
class B:public A
{
 public :
	void a(){};
	 
};


int main(int argc, char *argv[])
{
	B a;
	cout<<sizeof(a);
	
	return 0;
}
