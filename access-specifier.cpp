#include<iostream>
using namespace std;
class base
{
    int a=10;
    protected:
    int b=20;
    public:
    int c=30;
    int get_pri()
    {
        return a;
    }
    int get_proc()
    {
        return b;
    }
    int get_pub()
    {
        return c;
    }
};
class derived: private base{
   int z=c;
   public:
   void get_it()
   {
     cout<<"value of a"<<get_pri(); 
   }
};
int main()
{
    derived d;
    d.get_it();
    cout<<d.get_pub();
}