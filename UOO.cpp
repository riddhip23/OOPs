#include<iostream>
using namespace std;
class temp
{
    int x;
    int y;
    public:
    temp(int y)
    {
        x=y;
    }
    void operator++(int)
    {
        x=x+1;
    }
    void print()
    {cout<<x<<endl;}
};
int main()
{
    temp t1(10);
    t1++;
    t1.print();
}

