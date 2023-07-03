// An array has elements from 1 to N-1. Each element is present once but there is only 1 element that is twice
// find that element (code studio)
#include<iostream>
using namespace std;
int duplicates(int a[],int n)
{
    int ans =0;
    for(int i=0;i<n;i++)
        {
            ans = ans^ a[i];
        }
    for(int i=1;i<n;i++)
    {
        ans=ans^i;
    }
    return ans;

}
int main()
{
    int a[5]={1,2,2,3,4};
    int res= duplicates(a,5);
    cout<<res;
}