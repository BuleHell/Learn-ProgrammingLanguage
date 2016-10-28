#include <iostream>
#include<memory>
#include<map>
#include<boost/smart_ptr.hpp>
using namespace std;
using namespace boost;

int main()
{
//        auto_ptr<int> a(new int(10));
//        scoped_ptr<int> sp(a);
//        if(a.get()==0)//转移语义
//        {
//            cout<<"NULL"<<endl;
//        }
//        a.reset(new int(20));
//        cout<<*a<<endl;

//        scoped_ptr<int> a2(new int(100));
//        cout<<*a2;
    //--------------------------------------------------
//    scoped_array<int> int_arr(new int[100]);
//    int_arr[0]=10;
//    cout<<int_arr[0]<<endl;
//    fill_n(&int_arr[0],100,8);
//    cout<<int_arr[5]<<endl;
//    int_arr[1]=int_arr[2]+int_arr[4];
//    cout<<int_arr[1]<<endl;
    //--------------------------------------------------
//    int *p=new int[10];
//    delete []p;
    //--------------------------------------------------
//    shared_ptr<int> spi(new int);

//    assert(spi);
//    *spi=253;
//    cout<<*spi;

//    shared_ptr<string> sp_str(new string("Hello"));
//    cout<<sp_str->size();
//    cout<<sp_str->at(2);

    typedef shared_ptr<string> sp_t;
    map<sp_t,string> a;
    sp_t ss(new string("Hello"));
    a[ss]="xx";







    return 0;
}

