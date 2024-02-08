#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    Rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle r1(10);
    cout<<r1.area();
    
}