#include<iostream>
using namespace std;
bool LinearSearch(int arr[3][3], int key)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }

        }
    }
    return false;
}
int main()
{
    int arr[3][3];
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
    int key;
    cin>>key;
    if(LinearSearch(arr,key))
        cout<<"Found";
    else 
        cout<<"Not Found";
    return 0;
}