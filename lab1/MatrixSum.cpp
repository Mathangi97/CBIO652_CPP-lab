#include <iostream>
using namespace std;
int main() 
{
int row;
int col;
cout<<"Enter the number of rows in the matrices: ";
cin>>row;
cout<<"Enter the number of columns in the matrices: ";
cin>>col;
int mat1[row][col];
int mat2[row][col];
int sum[row][col];
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout << "Enter element A" << i + 1 << j + 1 << " : ";
        cin>>mat1[i][j];
    }
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        cout << "Enter element B" << i + 1 << j + 1 << " : ";
        cin>>mat2[i][j];
    }
}
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        sum[i][j]=mat1[i][j]+mat2[i][j];
    }
}
cout<<"Sum of the matrices: \n";
for(int i=0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
      cout<<sum[i][j]<<" ";
    }
    cout<<"\n";
}

    return 0;
}