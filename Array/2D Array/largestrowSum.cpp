//row wise sum of elements of a 2d array and find the largest sum and the row.
#include<iostream>
using namespace std;

int largestRowSum(int arr[3][3])
{
    int maxi=INT_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<3;col++)
        {
            sum+= arr[row][col];
        }
        if(sum>maxi)
        {
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"Largest sum is: "<<maxi<<endl;
    return rowindex;
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
    int res= largestRowSum(arr);
    cout<<"Max sum is at row Index: "<<res;
    return 0;
}