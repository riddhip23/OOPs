#include<iostream>
using namespace std;
class temp
{
    int *var;
    public:
    temp(int x)
    {
        var=new int;
        *var=x;
    }
    void setval(int val)
    {
        *var=val;
    }
    void print()
    {
        cout<< *var;
    }
    ~temp()
    {
        cout<<"Destr"<<endl;
    }
};
int main()
{
    temp t1(10);
    
    temp t2=t1;
    // t1.print();
    // t2.print();
    t1.setval(20);
    t1.print();
    t2.print();

}