// find the minimum and maximum no. in an array
#include<iostream>
using namespace std;
int max_element(int a[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        //max=max(max,a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int min_element(int a[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    return min;
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
    int max=max_element(a,n);
    cout<<"Maximum element is: "<<max<<endl;
    int min=min_element(a,n);
    cout<<"Minimum element is: "<<min<<endl;

}