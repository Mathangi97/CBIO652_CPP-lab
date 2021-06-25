#include <iostream>

using namespace std;
class overload
{
    public:
    void sum()
    {
        cout<<"Default sum: 0"<<"\n";
    }
    void sum(int a,int b)
    {
        cout<<"Sum of "<<a<<" and "<<b<<" is: "<<(a+b)<<"\n";
    }
   void sum(int a,int b,int c)
    {
        cout<<"Sum of "<<a<<", "<<b<<" and "<<c<<" is: "<<(a+b+c)<<"\n";
    }
};
int main()
{
    overload Ov;
    Ov.sum();
    Ov.sum(1,2);
    Ov.sum(10,20,30);
    return 0;
}