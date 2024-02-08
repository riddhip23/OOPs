#include <iostream>  
using namespace std;  
class A  
{  
    private:
    int pri=88;
    protected:  
     int a;  
    public:  
    void get_a(int n)  
    {  
        a = n;  
    }  
    int get_pri()
     {
        return pri;
     }
};  
  
class B  
{  
    protected:  
    int b;  
    public:  
    void get_b(int n)  
    {  
        b = n;  
    }  
    };  
class C : public A,private B  
{  
   public:  
   
    void display()  
    {  
        std::cout << "The value of a is : " <<a<< std::endl;  
        std::cout << "The value of b is : " <<b<< std::endl;  
        cout<<"Addition of a and b is : "<<a+b;  
    } 
    int here()
    {
        get_b(10);
        return b;
    } 
};  
int main()  
{  
   C c;  
   
//    c.get_a(10);  //hech function jar tu class c madhe lihles tr error nahi dakvat
//    c.get_b(20); 
c.get_pri(); ///fakt data member accees krnar direct in case of protected not member function
   c.display();  
   cout<<c.here();
  
    return 0;  
}  