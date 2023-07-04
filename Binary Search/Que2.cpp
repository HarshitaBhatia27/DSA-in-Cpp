//find total no. of occurences of an element in a sorted array
#include<iostream>
using namespace std;
int LeftOccurence(int a[],int n,int key)
{
    int start=0,end=n-1;
    int mid=start + (end-start)/2;
    int count=0 ;
    while(start<=end)
    {
        if(a[mid]==key)
        {
             count++;
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
    return count;
}
int RightOccurence(int a[],int n,int key)
{
    int start=0,end=n-1;
    int mid=start + (end-start)/2;
    int count=0 ;
    while(start<=end)
    {
        if(a[mid]==key)
        {
             count++;
             start=mid+1;
        }
        else if(a[mid]>key) //left part me jao
        {
              end=mid-1;
        }
        else   
            start=mid+1;
        mid= start + (end-start)/2;   

    }
    return count;
}


int main()
{ 
    int a[]={1,2,3,3,3,0,5};
    int result = LeftOccurence(a,7,3) + RightOccurence(a,7,3);
    cout<<result;
    return 0;
}