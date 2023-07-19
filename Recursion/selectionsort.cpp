#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n)
{
    if(n==0 || n==1)
        return;
    for(int i=0;i<n;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minIndex]>arr[j])
            {
                    minIndex=j;
            }

        }
        swap(arr[minIndex],arr[i]);
    }

    SelectionSort(arr,n-1);
    
}
int main()
{
    int arr[6]={2,200,0,50,1,20};
    SelectionSort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }    
}