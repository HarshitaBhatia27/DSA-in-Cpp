//given a no. n, give the nth fibonacci term
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    int t1=0;
    int t2=1;
    int next_term;
    for(int i=3;i<=n;i++)
    {
        next_term = t1+t2;
        t1=t2;
        t2=next_term;
    }
    return next_term;
}
int main()
{
    int n;
    cin>>n;
    int ans=fibonacci(n);
    cout<<ans;
    
}