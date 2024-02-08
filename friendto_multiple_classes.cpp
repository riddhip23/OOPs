#include<iostream>
using namespace std;
class temp;//forward declaration

class nottemp{
int x;
public:
void setdata(int m)
{
    x=m;
}
friend void display(temp&t,nottemp&t1);
};

class temp{
    int y;
    public:
    void setdata(int m)
    {
        y=m;
    }
    friend void display(temp&t,nottemp&t1);
};

void display(temp &t,nottemp &t1)
{
    cout<<t.y<<endl;
    cout<<t1.x<<endl;
}

int main()
{
    temp t;
    t.setdata(20);
    nottemp t1;
    t1.setdata(30);
    display(t,t1);
}
