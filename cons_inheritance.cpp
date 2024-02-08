#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Default of base"<<endl;

    }
    Base(int a)
    {
        cout<<"para of base"<<endl;
    }
};
class Derived:public Base
{
    public:
     Derived ()
     {
        cout<<"default of D"<<endl;
     }
     Derived (int a):Base(a)
     {
        cout<<"para of D"<<endl;
     }
};
int main()
{
    Derived d(20);
}