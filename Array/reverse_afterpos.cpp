//reverse array after a position 'm'
#include<iostream>
#include<vector>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void reverse(int arr[],int n, int m)
{
    int start=m+1, end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    reverse(arr,6,2);
    printArray(arr,6);
    return 0;
}