#include <iostream>
#include<vector>
#include<boost/smart_ptr.hpp>
#include<boost/make_shared.hpp>
using namespace std;
using namespace boost;

void any_func(void *p)
{
    cout<<"ss"<<endl;

}

int main()
{
    //    int *arr=new int[100];
    //    scoped_array<int> sa(arr);

    //    fill_n(&sa[0],100,5);
    //    sa[10]=sa[20]+sa[30];
    //    cout << sa[10] << endl;
    //------------------
    //    vector<int> vi(100,5);
    //    vi[10]=vi[20]+vi[30];
    //    cout<<vi[10]<<endl;
    //------------------
    //    shared_ptr<string>  sp=make_shared<string>("make_share");
    //    shared_ptr< vector<int> >  sp2=make_shared< vector<int> >(10,2);

    //    cout<<sp->size()<<endl;
    //    cout<<(*sp)[1]<<endl;
    //------------------
//    shared_ptr<void> p((void*)0,any_func);
    //------------------
    int *p=new int[100];
    shared_array<int> sa(p);
    shared_array<int> sa2=sa;
    sa[0]=10;
    if(sa2[0]==10)
    {
        cout<<"aa"<<endl;
    }

    return 0;
}

