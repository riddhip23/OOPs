#include<iostream>
using namespace std;

class base;
class another{
    public:
    void isfunction(base&obj);
};
class base
{
    int len;
    int b;
    public:
    base()
    {
        len=1;
        b=9;
    }
    friend void another::isfunction(base&);
};

    void another::isfunction(base&obj)
    {
        cout<<obj.len<<endl;
        cout<<obj.b<<endl;
    }
int main()
{
    base b;
    another a;
    a.isfunction(b);
}