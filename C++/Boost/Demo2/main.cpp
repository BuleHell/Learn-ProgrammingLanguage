#include <iostream>
#include<sstream>
#include<boost/progress.hpp>
using namespace std;
using namespace boost;

int main()
{
//    stringstream  ss;
//    {
//    progress_timer t(ss);
//    int i=100;
//    while(i--)
//    cout << "Hello World!" << endl;
//    }
//    cout<<ss.str();


    progress_timer timer;
    cout<<timer.elapsed_min()<<endl;
    return 0;
}

