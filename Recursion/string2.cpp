//check palindrome
#include<iostream>
using namespace std;
bool checkPalindrome(string &str,int i,int j)
{
    //base case
    if(i>j)
        return true;
    if(str[i]!=str[j])
        return false;
    else
        return checkPalindrome(str,i+j,j-1);
    
}
int main()
{
    string name="abba";
    bool palindrome =checkPalindrome(name,0,name.length()-1);
    if(palindrome)
    {
        cout<<"String is palindrome"<<endl;
    }
    else
        cout<<"String is not palindrome"<<endl;
    
    return 0;
}