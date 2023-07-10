#include<iostream>
using namespace std;
char toLOwerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;

    }
}
bool checkPalindrome(char name[], int n)
{
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLOwerCase(name[s])!=toLOwerCase(name[e]))
            return 0;
        else
        {
            s++;
            e--;
        }

    }
    return 1;
}
int length(char name[])

{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter string" <<endl;
    cin>>name;

    cout<<"String is ";
    cout<<name<<endl;
    int len=length(name);
    if(checkPalindrome(name,len)==1)
    {
        cout<<"palindrome";
    } 
    else
        cout<<"Not palindrome";
    
}