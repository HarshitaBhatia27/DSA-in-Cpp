#include<iostream>
using namespace std;
void solve(int arr[])
{
    cout<<"Size in solve function "<<sizeof(arr)<<endl;

    cout<< arr<<endl;
    cout<<&arr<<endl;
    arr[0]=20;
}
int main()
{
    int arr[10]={1,2,3,4};
    cout<< "Size of array: " <<sizeof(arr)<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    solve(arr);
    cout<<"Wapas main function mei aagye hai "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}