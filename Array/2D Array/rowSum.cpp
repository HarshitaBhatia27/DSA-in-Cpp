//row wise sum of elements of a 2d array
#include<iostream>
using namespace std;
void sum(int arr[][3],int row,int col)
{
    cout<<"Printing sum"<<endl;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+= arr[row][col];
        }
        cout<<sum<<endl;
    }
}
int main()
{
    int arr[3][3];
    cout<<"Enter elements of an array: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Elements in 2D array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    sum(arr,3,3);
    return 0;
}