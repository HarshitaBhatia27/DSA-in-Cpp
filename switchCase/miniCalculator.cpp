// Mini Calculator program 
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter num 1: "<<endl;
    cin>>a;
    cout<<"Enter num 2: "<<endl;
    cin>>b;
    int n;
    cout<<"Enter your choice"<<endl;
    cin>>n;
   
    switch(n){
        case 1: cout<<"Addition= "<<(a+b)<<endl;
                break;
        
        case 2: cout<<"Subtraction= "<<(a-b)<<endl;
                break;
        case 3: cout<<"Multiplication= "<<(a*b)<<endl;
                break;
        case 4: cout<<"Division= "<<(a/b)<<endl;
                break;
        case 5: cout<<"Modulus= "<<(a%b)<<endl;
                break;
        default: cout<<"Enter a valid choice"<<endl;
                break;
    }
}