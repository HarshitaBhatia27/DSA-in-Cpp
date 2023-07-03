//check whether a no. is prime or not
#include<iostream>
using namespace std;
bool isprime(int n)
{ 
    //true=prime, false=notprime
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
           return false;
            break;
    }
    return true;
}
int main()
{ 
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"Prime number";
    }
    else 
        cout<<"Not prime";
    
}