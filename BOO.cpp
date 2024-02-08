#include<iostream>
using namespace std;
class temp
{
    int x;
    public:
    temp (int y)
    {
        x=y;
    }
    int operator+(temp &h)
    {
        int z=x+h.x;
        return z;
    }
    
};
int main()
{
    temp t(6);
    temp t1(8);
    cout<<t+t1;
}