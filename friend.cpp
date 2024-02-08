#include <iostream>  
using namespace std;  
class B;          // forward declarartion.  
class A  
{  
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void min(A,B);         // friend function.  
};  
class B  
{  
    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }  
    friend void min(A,B);                    // friend function  
};  
void min(A z,B t)  
{  
    if(z.x<=t.y)  
    std::cout << z.x << std::endl;  
    else  
    std::cout << t.y << std::endl;  
}  
   int main()  
{  
   A z;  
   B t;  
   z.setdata(10);  
   t.setdata(20);  
   min(z,t);  
    return 0;  
 }  