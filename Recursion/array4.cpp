//binary search using recursion
#include<iostream>
using namespace std;
bool binarysearch(int arr[],int key,int s,int e)
{
    if(s>e)
        return false;


    int mid=s + (e-s)/2;
    if(arr[mid]==key)
        return true;
    else if(arr[mid]<key)
        return binarysearch(arr,key,mid+1,e);
    else
        return binarysearch(arr,key,s,mid-1);
}
int main()
{
    int arr[6]={2,4,6,10,14,16};
    bool res=binarysearch(arr,10,0,4);
    if(res)
    {
        cout<<"Key found"<<endl;
    }
    else
        cout<<"Key not found";
    return 0;
}