// Print the sum of elements of array
#include<iostream>
using namespace std;
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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"Sum of elements is: "<<sum<<endl;
}