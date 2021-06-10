#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int arr[] = { 45,26,1,89,56,35,22,43,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
   cout << "\nArray before sorting : \n";
    for (int i = 0; i < n; ++i)
       { 
           cout << arr[i] << " ";
       }
        sort(arr, arr + n);
        
    cout << "\nArray after sorting : \n";
    for (int i = 0; i < n; ++i)
        {
            cout << arr[i] << " ";
        }
    return 0;
}