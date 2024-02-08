#include<iostream>
using namespace std;
class Rectangle
{
    int len;
    int breadth;
    public:
    Rectangle(int l,int b)
    {
        len=l;
        breadth=b;
    }
   
    void print()
    {
        cout<<len<<endl;
        cout<<breadth<<endl;
    }
    void change(int a,int b)
    {
        len=a;
        breadth=b;
    }
};
int main()
{
    Rectangle r1(10,30);
    Rectangle r2=r1;
    r1.change(88,90);
    r1.print();
    r2.print();
}