#include <iostream>
using namespace std;
bool checkPalindrome(string str);
int main()
{
    string str;
	cout<<"Enter the string: ";
    cin>>str;
    bool result = checkPalindrome(str);
    if(result)
	{
        cout<<"Palindrome";
    }
	else 
	{
        cout<<"It is not a palindrome";
    }
    return 0;
}

bool checkPalindrome (string str)
{
    int n = str.length();

    for (int i =0; i<= n/2; i++) 
    {
        if (str[i] != str[n-1-i])
            return false;
    }
    return true;
}
