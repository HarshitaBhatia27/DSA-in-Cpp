//find the pivot element
#include<iostream>
using namespace std;
int pivot(int a[],int n)
{
    int start=0, end=n-1;
    int mid= start+(end-start)/2;
    while(start<end)
    {
        if(a[mid]>=a[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
   return start;
}
int main()
{
    int a[5]={7,9,1,2,3};
    int res=pivot(a,5);
    cout<<res;
    return 0;
}