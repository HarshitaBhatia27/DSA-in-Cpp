//search in rotated sorted array
//find the pivot element
#include<iostream>
using namespace std;
int getpivot(int a[],int n)
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
int binary_search(int a[],int s,int e,int key)
{
    int start=s;
    int end=e;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(key==a[mid])
        {
            return mid;
        }

        if(key>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int pivot(int a[],int n,int k)
{
    int pivot=getpivot(a,n);
    if(k>=a[pivot] && k<=a[n-1])
    {
        return binary_search(a,pivot,n-1,k);
    }
    else
    {
        binary_search(a,0,pivot-1,k);
    }
}
int main()
{
    int a[5]={7,9,1,2,3};
    int res=pivot(a,5,3);
    cout<<res;
    
    return 0;
}