#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Proteins
{
    public:
    
    string name;
    string organism;
    int length;
    string function;
    
    
    void getName()
    {
        cout<<"Enter protein name:";
        cin>>name;
    }
    void getLength()
    {
        cout<<"Enter protein length:";
        cin>>length;
    }
    void getOrganism()
    {
        cout<<"Enter Organism:";
        cin>>organism;
    }
    void getfunc()
    {
        cout<<"Enter protein function:";
        cin>>function;
    }
    void protShow()
    {
        cout<<"Protein name: "<<name<<"\n";
        cout<<"Protein length: "<<length<<"\n";
        cout<<"Organism: "<<organism<<"\n";
        cout<<"Protein function: "<<function<<"\n";
        
    }
    
};
int main()
{
    Proteins P;
    P.getName();
    P.getLength();
    P.getOrganism();
    P.getfunc();
    P.protShow();

    return 0;
}
