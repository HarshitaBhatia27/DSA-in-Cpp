#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
    cout<<"Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void reverseArray(int a[],int n)
{
    int start=0;
    int end=n-1;
    int swap;
    while(start<=end)
    {
            swap=a[start];
            a[start]=a[end];
            a[end] = swap;
            start++;
            end--;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int a[20];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printArray(a,n);
    cout<<endl;
    cout<<"Reverse array: ";
    reverseArray(a,n);
    printArray(a,n);
    // for(int i=(n-1);i>=0;i--)
    // {
    //     cout<<a[i]<<" ";
    // }
}