#include <iostream>
#include<vector>
#include<string>
#include<fstream>
#include<boost/progress.hpp>
using namespace std;
using namespace boost;
int main()
{
    vector<string> v(10);
    ofstream fs("c://test.txt");
    progress_display pd(v.size(),cout,"ALL","RUN","   ");
    vector<string>::iterator i;
    for(i=v.begin();i!=v.end();i++)
    {
       fs<<*i<<endl;
       if(i->empty())
       {
           cout<<"kong"<<endl;

       }
       pd.restart(v.size());
       pd+=(i-v.begin()+1);
    }

    return 0;
}

