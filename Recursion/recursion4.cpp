//power of a number optimised
#include<iostream>
using namespace std;
int power(int n,int x)
{
    if(x==0)
        return 1;
    if( x==1)
        return n;
    int ans=power(n,x/2);
    if(x%2==0)
        return ans*ans;
    else
        return n*ans*ans;
}
int main()
{ 
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int x;
    cout<<"Enter power: ";
    cin>>x;
    cout<<"Ans: "<<power(n,x)<<endl;
    return 0;
} 