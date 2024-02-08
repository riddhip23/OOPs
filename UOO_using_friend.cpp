#include<iostream>
using namespace std;
class Complex
{
int img;
int real;
public:
Complex(int x,int y)
{
    img=x;
    real=y;
}
friend Complex operator--(Complex c1)
{
   --c1.img;
   --c1.real;
   return c1;
}
void print()
{
    cout<<img<<" "<<real;
}
};
int main(){
    Complex c1(20,30);
    Complex c2=--c1;
    c2.print();
}

