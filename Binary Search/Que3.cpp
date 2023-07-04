// find peak element index in a mountain array
#include<iostream>
using namespace std;
int peakElement(int a[],int n)
{
    int start=0, end=n-1;
    int mid=start + (end-start)/2;
    while(start<end){
             if(a[mid]<a[mid+1])
             {
                    start=mid+1;
             }
             else  // ya to mid is big ya fir mid is the peak element
                 end=mid;
             mid = start + (end-start)/2;
    }
    return start;
}
int main()
{ 
    int a[4]={3,4,5,1};
    int peak=peakElement(a,4);
    cout<<peak;
    return 0;
}