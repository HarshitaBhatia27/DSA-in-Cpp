// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.
#include<iostream>
#include<string>
using namespace std;
bool valid(char ch)
{
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch>='A' && ch<='Z'))
    {
        return true;
    }
    return false;
}
char tolowercase(char ch)
{
   if((ch>='a' && ch<='z') || (ch>='0' & ch<='9'))
       return ch;
   else
   {
    char temp=ch-'A' +'a';
    return temp;
   }
}
bool checkpalindrome(string a)
{
    int s=0;
    int e=a.length()-1;
    while(s<=e)
    {
        if(tolowercase(a[s])!= tolowercase(a[e]))
        {
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
bool ispalindrome(string a)
{
    string temp="";
    for(int j=0;j<a.length();j++)
    {
        if(valid(a[j]))
        {
            temp.push_back(a[j]);
        }
    }
    for(int j=0;j<temp.length();j++)
    {
        temp[j]=tolowercase(temp[j]);
    }
    return checkpalindrome(temp);
}
int main(){
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    bool isPal = ispalindrome(input);

    if (isPal) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
