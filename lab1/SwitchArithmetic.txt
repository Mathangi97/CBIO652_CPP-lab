#include <iostream>
using namespace std;
int main() 
{
char op;
int num1;
int num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
cout<<"Enter the operation to be performed (+)(-)(*)(/) : ";
cin>>op;
switch(op)
{
    case '+': cout<<"Sum: "<<num1+num2; break;
    case '-': cout<<"Difference: "<<num1-num2; break;
    case '*': cout<<"Multiplication: "<<num1*num2; break;
    case '/': cout<<"Division: "<<num1/num2; break;
    default: cout<<"Enter valid operation!!"; break;
}

    return 0;
}