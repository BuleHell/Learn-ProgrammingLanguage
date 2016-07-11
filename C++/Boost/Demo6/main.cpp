#include <iostream>
#include <memory>
using namespace std;
class normal_pointer_example
{
public:
    normal_pointer_example(){cout<<"normal_pointer_example()\n";}
    ~normal_pointer_example(){cout<<"~normal_pointer_example\n";}
};
class normal_pointer_wrong{};//normal_pointer_wrong异常
bool quit;
void quit_func()
{
    if(quit==true)
        cout<<"call quit_func()\n";
    throw normal_pointer_wrong();
}
int main()
{
    try
    {
        auto_ptr<normal_pointer_example> Apointer (new normal_pointer_example);
        quit=true;
        quit_func();
        //delete Npointer;
    }
    catch (normal_pointer_wrong)
    {
        cout<<"catch normal_pointer_wrong\n";
    }
    return 0;
}
