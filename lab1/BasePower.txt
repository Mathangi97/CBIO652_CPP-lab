#include <iostream>
#include <math.h>
using namespace std;
int powerFunc(int b,int p)
{
    return (pow(b,p));
}
int main() 
{
    int base;
    int power;
    int output;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>power;
    output=powerFunc(base,power);
    cout<<"Output: "<<output;


    return 0;
}