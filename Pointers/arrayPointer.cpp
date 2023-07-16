#include<iostream>
using namespace std;
int main()
{
    int arr[4] = { 12,44,66,18};
    cout<<"Address of  first memory block is "<<arr<<endl; // base address
    cout<<"Address of  first memory block is "<<&arr[0]<<endl; //base address
    cout<< *arr<<endl; //value of arr[0]
    cout<< &arr<< endl; // base address

    int *p=arr;
    cout<< p<< endl;// address of value pointing too
    cout<< &p<< endl;
    cout<< sizeof(*p)<<endl; // size of int value stored at address  p is pointing to;


    cout<< *arr+1 <<endl;
    cout<< *(arr) +1<<endl;
    cout<< *(arr+1) <<endl;
    int i=0;
    cout<< arr[i] << " "<< i[arr]<< endl;

    int arr[] ={4,5,6,7};
    int *p = (arr+1);
    cout<< *arr+9;


}