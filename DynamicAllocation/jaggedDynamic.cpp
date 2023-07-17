#include<iostream>
using namespace std;
int main()
{
    //creating n rows
    int row;
    cin>>row;
    int **arr = new int*[row];
    int sizes[]={4,2,1};


    for(int i=0;i<row;i++)
    {
        *(arr+i)=new int[sizes[i]];
    }
   // taking input
//    int num=1;
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<sizes[i];j++)
    {
        //arr[i][j]=num++;
        cin>>arr[i][j];
    }
   }

   for(int i=0;i<row;i++)
    {
        for(int j=0;j<sizes[i];j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   

    return 0;
}