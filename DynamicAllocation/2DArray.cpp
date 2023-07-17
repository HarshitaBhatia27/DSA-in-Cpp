// same no. of rows n cols
#include<iostream>
using namespace std;
int main()
{
    //array creation
    int n;
    cin>>n;
    int **arr= new int*[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }

    //taking input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

  //printing o/p
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}