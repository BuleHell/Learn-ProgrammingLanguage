#include <iostream>
#include<boost/timer.hpp>


using namespace boost;
using namespace std;

int main()
{
    timer t;
    cout<<"elapsed_MAX"<<t.elapsed_max()/3600<<"h";
    for(int i=0;i<1000;i++)
    {

        cout<<"第几个："<<i<<endl;

    }
    cout<<"elapse:"<<t.elapsed()<<"s";
    return 0;
}

