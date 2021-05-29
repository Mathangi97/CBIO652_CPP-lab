#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() 
{
string dna;
cout<<"Enter DNA sequence: ";
cin>>dna;
cout<<"Original order: "<<dna<<"\n";
reverse(dna.begin(),dna.end());
cout<<"Reverse order: "<<dna;

    return 0;
}