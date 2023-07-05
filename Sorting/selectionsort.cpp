#include<iostream>
using namespace std;
void selectionSort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
                minIndex=j;
        }
        swap(a[minIndex],a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int a[6]={64,45,12,22,11,0};
    selectionSort(a,6);
    return 0;
}