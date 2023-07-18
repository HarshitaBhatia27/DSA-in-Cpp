//given an array return its sum using recursion
#include<iostream>
using namespace std;
int sum(int arr[],int size)
{
    if(size==0)
        return 0;
    
    if(size==1)
        return arr[0];

    int ans=arr[0] + sum(arr+1,size-1);
    return ans;
}
int main()
{
    int arr[6]={3,2,5,1,6,1};
    int res= sum(arr,6);
    cout<<res;
    return 0;
}