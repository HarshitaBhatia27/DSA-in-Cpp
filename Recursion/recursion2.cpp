//power of 2
#include<iostream>
using namespace std;
int power(int n,int x)
{
    if(x==1)
        return n;
    
    return n*power(n,x-1);
}
int main()
{ 
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int x;
    cout<<"Enter power: ";
    cin>>x;
    cout<<"Ans 2: "<<power(n,x)<<endl;
    return 0;
} 