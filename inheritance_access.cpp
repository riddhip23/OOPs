#include<iostream>
using namespace std;
class Base
    {
        int a;
        protected:
        int b;
        public:
        int c;
        void setpri(int x)
        {
            a=x;
            cout<<a<<endl;
        }
        

    };
    class Derived:private Base
    {
        public:
        void set(int x)
        {
            setpri(10);
          c=x;
           
        }
        void setpro(int y)
        {
            b=y;
        }
    void display()
        {
            cout<<c<<endl;
            cout<<b<<endl;
        }
        
    };
    int main()
    {
       Derived d1;
       d1.set(10);
       d1.setpro(9);
       d1.display();
    }