//factorial of a number
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    
    return n*fact(n-1);
}
int main()
{ 
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    cout<<"Factorial is: "<<fact(n)<<endl;
    return 0;
} 