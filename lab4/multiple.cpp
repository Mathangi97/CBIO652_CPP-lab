#include <iostream>

using namespace std;
class A
{
    public:
    int x=10;
    
};
class B
{
    public:
    int y=20;
};
 class Derived: public A, public B
{
    public:
    Derived()
    {
    cout<<"Base class (A) value: "<<x<<"\n";
    cout<<"Base class (B) value: "<<y<<"\n";
    cout<<"Sum is: "<<(x+y);
    }
};
int main()
{
    Derived d;
    
    return 0;
}