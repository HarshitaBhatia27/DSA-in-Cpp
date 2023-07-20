#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int p=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++) //pivot ke ek aage se loop chalado till last element
    {
        if(arr[i]<=p)
            cnt++;
    }
    int pIndex= s + cnt; //right place of pivot
    swap(arr[pIndex],arr[s]);
    
    int i=s, j=e;
    while(i<pIndex && j>pIndex)
    {
        while(arr[i]<=p ){   
            i++;
        }
        while(arr[j]>p)
            j--;
        if(i<pIndex && j>pIndex)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;

        }
    }
    return pIndex;

}
void QuickSort(int arr[],int s,int e)
{
    if(s>=e)
        return;
    int p = partition(arr,s,e); 

    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}
int main()
{
    int arr[15] = {3,7,0,1,5,8,3,2,24,66,87,23,12,12,12};
    int n=15;
    QuickSort(arr, 0,n-1);
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0; 
}