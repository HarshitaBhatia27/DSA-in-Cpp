//find the first and last occurence of an element in a sorted array
#include<iostream>
using namespace std;
int firstOccurence(int a[],int n,int key)
{
    int start=0,end=n-1;
    int mid=start + (end-start)/2;
    int ans = -1 ;
    while(start<=end)
    {
        if(a[mid]==key)
        {
             ans=mid;
             end = mid-1;
        }
        else if(a[mid]>key) //left part me jao
        {
              end=mid-1;
        }
        else   
            start=mid+1;
        mid= start + (end-start)/2;   

    }
    return ans;
}
int LastOccurence(int a[],int n,int key)
{
    int start=0,end=n-1;
    int mid= start + (end-start)/2;
    int ans = -1 ;
    while(start<=end)
    {
        if(a[mid]==key)
        {
             ans=mid;
             start = mid+1;
        }
        else if(a[mid]>key) //left part me jao
        {
              end=mid-1;
        }
        else   
            start=mid+1;
        mid= start + (end-start)/2;   

    }
    return ans;
}
int main()
{ 
    int a[]={0,0,0,0};
    cout<<"First occurence of 0 is "<<firstOccurence(a,4,0)<<endl;
    cout<<"Last occurence of 0 is "<<LastOccurence(a,4,0);
    return 0;
}