//check whether an array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int arr[],int size)
{
    //base case  
    if(size==0 || size==1)
        return true;


    if(arr[0]>arr[1])
        return false;
    else
        return isSorted(arr+1,size-1);
}
int main()
{
    int arr[6]={2,4,6,50,11,13};
    bool ans= isSorted(arr,6);
    if(ans)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
        cout<<"Array is not sorted";
    return 0;
}