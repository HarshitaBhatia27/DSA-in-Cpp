//positive numbers
#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    // int ans=0;
    // int i=0;
    // while(n!=0)
    // {
    //     int bit= n & 1;
    //     ans = (bit* pow(10,i)) + ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<ans;

    //approach 2
    int a[10];
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    cout<<"Binary of given number"<<" ";
    for(i=i-1;i>=0;i--)
    {
        cout<<a[i];
    }
}