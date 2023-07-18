//linear search using recursion
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    if(size==0)
        return false;
    
    if(arr[0]==key)
        return true;
    else
        return search(arr+1,size-1,key);
}
int main()
{
    int arr[5]={3,2,5,1,6};
    bool res=search(arr,5,10);
    if(res)
    {
        cout<<"Key found"<<endl;
    }
    else
        cout<<"Key not found";
    return 0;
}