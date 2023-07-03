#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t1=0;
    int t2=1;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1;i<=(n-2);i++)
    {
        int t3=t1+t2;
        cout<<t3<<" ";
        t1=t2;
        t2=t3;
    }

}