#include <iostream>
#include<string.h>
using namespace std;
  
int main()
{
   string seq;
   cout<<"Enter the DNA sequence: ";
   cin>>seq;
   cout<<"First 5 nucleotides from the sequence: "<<seq.substr(0,5)<<"\n";
    
    return 0;
}