// diff no. of rows n cols
#include<iostream>
using namespace std;
int main()
{
    //array creation
    int row;
    cin>>row;
    int col;
    cin>>col;
    int** arr= new int*[row];
    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }

    //taking input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

  //printing o/p
  for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing memory ---> cols
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }

    //delete pointer --> rows
    delete [] arr;
    return 0;
}