#include <iostream>

using namespace std;
void display()
{
    cout<<"Default value: 0 \n";
}

void display(int a)
{
    cout<<"Value of a: "<<a<<"\n";
}

void display(double b)
{
    cout<<"Value of b: "<<b<<"\n";
}

int display(int a, double b)
{
    int val=a+b;
    return val;
}
int main()
{
   int a=10;
   double b=2.34;
   display();
   display(a);
   display(b);
   int c=display(a,b);
   cout<<"Sum value: "<<c;

    return 0;
}