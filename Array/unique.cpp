//find unique element in the array
#include<iostream>
using namespace std;
int findUnique(int a[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans= ans^a[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[20];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result=findUnique(a,n);
    cout<<result;
}