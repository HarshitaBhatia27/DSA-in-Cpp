#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
                    a[j+1]=a[j]; //right shift
                    j=j-1;
                
        }
        a[j+1]=temp;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int a[6]={64,45,12,22,11,0};
    InsertionSort(a,6);
    return 0;
}