#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(key==a[mid])
        {
            return mid;
        }

        if(key>a[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Enter elements of array: "<<endl;
    int a[10];
    for(int i=0;i<n;i++)
    {
           cin>>a[i];
    }
    int ele,index;
    cout<<"Enter element to search: "<<endl;
    
    cin>>ele;
    index=binary_search(a,n,ele);
    cout<<index;

    return 0;
}

// int main() { 

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     // int evenIndex = binary_search(even, 6, 6);

//     // cout << " Index of 6 is " << evenIndex << endl;

//     int oddIndex = binary_search(odd, 5, 14);

//     cout << " Index of 14 is " << oddIndex << endl;


//     return 0;
// }