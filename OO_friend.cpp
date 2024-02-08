#include<iostream>
using namespace std;
class Complex
{

    int real;int img;
    public:
    
    Complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }
    friend Complex operator+(Complex a,Complex b);
    void display()
    {
        cout<<real<<" "<<img<<endl;
    }

};
Complex operator+(Complex a,Complex b)
{
    Complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}
int main()
{
    Complex c1(10,20);
     Complex c2(30,40);
     Complex c3;
     c3=c1+c2;
     c3.display();
}