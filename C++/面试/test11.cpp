#include <iostream>

using namespace std;

class C
{
private:
	mutable int a;
public :
    int  f()const
	{
		return a++;
	}
};

int main(int argc, char *argv[])
{
	C c;
	c.f();
	
	return 0;
}
