// prime number
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int num=2;     
    bool flag=true;
    // while(num<n)
    // {
    //     if(n%num==0)
    //     {
    //         cout<<"Not prime";
    //         flag=false;
    //     }
    //     num=num+1;

    // }
    // if(flag==true)
    // {
    //     cout<<"Prime number";
    // }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not  prime"<<endl;
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Prime number";
    }
}