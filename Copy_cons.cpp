#include<iostream>
using namespace std;
class temp
{
    int x,y;
    public:
    temp(int a,int b)
    {
        x=a;
        y=b;
    }
    temp(temp&t)
    {
        x=t.x;
        y=t.y;

    }
    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    temp tt(10,20);
    temp tt1(tt);
    tt1.print();
}