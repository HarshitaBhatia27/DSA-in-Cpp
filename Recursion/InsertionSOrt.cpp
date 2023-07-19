#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n)
{
    if(n==0 || n==1)
        return;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
                j--;
            }
            else
                break;

        }
        arr[j+1]=temp;
        
    }

    InsertionSort(arr,n-1);
    
}
int main()
{
    int arr[6]={2,200,0,50,1,13};
    InsertionSort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }    
}