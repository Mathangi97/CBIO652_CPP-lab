#include <iostream>

using namespace std;
class classroom
{
    public:
    
    
    string name="Mathangi S";
    int roll=20310010;
    int mark1=80;
    int mark2=67;
    int mark3=91;
    
     void avg()
    {
        double average=(mark1+mark2+mark3)/3;
        cout<<"Average marks: "<<average;
    }
    
};
int main()
{
     classroom C;
   cout<<"Name: "<<C.name<<"\n";
    cout<<"Roll number: "<<C.roll<<"\n";
     cout<<"Mark 1: "<<C.mark1<<"\n";
      cout<<"Mark 2: "<<C.mark2<<"\n";
       cout<<"Mark 3: "<<C.mark3<<"\n";
   
   C.avg();

    return 0;
}