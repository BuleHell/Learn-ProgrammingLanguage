#include <iostream>
#include<boost/smart_ptr.hpp>
using namespace std;
using namespace boost;

int main()
{
    scoped_ptr<string> sp(new string("Hello"));
    cout<<*sp<<endl;
    cout<<sp->size();
    return 0;
}

