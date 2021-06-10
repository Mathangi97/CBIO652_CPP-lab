#include <iostream>
using namespace std;
  
int main()
{
    int array[]={1,2,3,4,5};
    int *p;
    p=array;
    
    cout<<"Elements in the array: "<<"\n";
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++)
    {
        cout<<*(array+i)<<" ";
    }
    
    return 0;
}