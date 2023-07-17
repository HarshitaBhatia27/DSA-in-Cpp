//variable size array
#include<iostream>
using namespace std;
int getsum(int *arr)
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res= getsum(arr);
    cout<<res;
}