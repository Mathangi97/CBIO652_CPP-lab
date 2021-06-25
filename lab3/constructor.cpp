#include <iostream>

using namespace std;
 class constructor
{
    public:
    string name;
    int roll;
    string dept;
    
     constructor()
    {
         name="Mathangi S";
        roll=20310010;
         dept="M.Tech Computational Biology";
        cout<<"Constructor invoked!\n";
        cout<<"Name: "<<name<<"\n"<<"Roll number: "<<roll<<"\n"<<"Department: "<<dept<<"\n\n";
    }
    
    constructor(string s,int r,string d)
    {
        name=s;
        roll=r;
        dept=d;
        cout<<"Parameterized constructor invoked!\n";
        cout<<"Name: "<<name<<"\n"<<"Roll number: "<<roll<<"\n"<<"Department: "<<dept;
    }
};
    

int main()
{
     constructor C;
     constructor C1("Meena",119013038,"B.Tech Bioinformatics");
    
    return 0;
}