#include<iostream>
using namespace std;
int main(){
    char a;
    cin>>a;
    if(a>='a' && a<='z')
    {
        cout<<"Lower case"<<endl;
    }
    else if(a>='A' && a<='Z')
    {
        cout<<"Upper case"<<endl;
    }
    else if(a>='0' && a<='9')
    {
        cout<<"Numerical";
    }

}