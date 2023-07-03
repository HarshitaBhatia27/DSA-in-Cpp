#include<iostream>
using namespace std;
// void even_odd(int x)
// {
//     if(x%2==0)
//     {
//         cout<<x<<" is even."<<endl;
//     }
//     else
//         cout<<x<<" is odd"<<endl;
// }
bool is_even(int a)
{
    //odd
    if(a&1)
    {
        return 0;
    }
    else //even
        return 1;
}
int main()
{
    int num;
    cin>>num;
    if(is_even(num))
    {
        cout<<"Number is even"<<endl;
    }
    else
    {
        cout<<"number is odd"<<endl;
    }
    
        
}