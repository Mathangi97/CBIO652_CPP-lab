#include <iostream>
using namespace std;
  
int main()
{
    int num=30;
    int *p;
    p=&num;
    
    cout<<"Value of the variable: "<<*p<<"\n";
    cout<<"Address of the variable: "<<p<<"\n";
    
    *p=50;
    cout<<"Changed value: "<<*p<<"\n";
    
    return 0;
}