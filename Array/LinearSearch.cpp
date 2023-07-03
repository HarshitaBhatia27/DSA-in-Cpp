#include<iostream>
using namespace std;
bool LinearSearch(int a[],int n,int ele)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
           return true; 
        }
    }
    return false;
}
int main()
{
    int n,key;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int a[20];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to search"<<endl;
    cin>>key;
    bool found=LinearSearch(a,n,key);
    if(found)
    {
        cout<<"Key is present "<<endl;
    }
    else 
        cout<<"Key not present"<<endl;
}