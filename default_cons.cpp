#include<iostream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    public:
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle r1;
    r1.area();
    cout<<r1.area()<<endl;
}