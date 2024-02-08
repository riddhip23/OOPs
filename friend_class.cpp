#include<iostream>
using namespace std;
class base;
class f{
    public:///////////////////////////dont forget to make public
   void isfunction(base&obj);
};

class base
{
    int len;
    int b;
    public:
    base()
    {
        len=9;
        b=8;
    }
    friend class f;
};
void f:: isfunction(base&obj){
   cout<<obj.len<<endl;
}
int main()
{
    base b;
    f fi;
    fi.isfunction(b);
}