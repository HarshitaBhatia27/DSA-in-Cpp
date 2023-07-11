//print the max occuring character in a string
#include<iostream>
#include<string>
using namespace std;
char getmaxocc(string str)
{
    int arr[26]= {0};
       for(int i=0;i<str.length();i++)
       {
           char ch=str[i];
           int number=0;
           if(ch>='a' && ch<='z')
               number=ch-'a';
           else
               number=ch+'A';
           arr[number]++;
       }
       
       int maxi=-1,ans=0;
       for(int i=0;i<26;i++)
       {
           if(maxi<arr[i])
           {
               ans=i;
               maxi=arr[i];
           }
       }
       return 'a'+ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<getmaxocc(s);
    return 0;
}