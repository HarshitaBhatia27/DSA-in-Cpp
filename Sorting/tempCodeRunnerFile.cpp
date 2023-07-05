#include<iostream>
using namespace std;
void InsertionSort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0)
        {
            if(a[j]>temp)
                a[j+1]=a[j]; //right shift
                j=j-1;
        }