// array stl works similar to basic array and its static, so we dont use it
#include<array> //array stl library
#include<iostream>
using namespace std;
int main()
{
    array<int,5> a ={1,2,3,4,5};
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;

    cout<<"Element at 4th index "<<a.at(4)<<endl;

    cout<<"Is array empty "<<a.empty()<<endl;

    cout<<"Size of array "<<a.size()<<endl;

}