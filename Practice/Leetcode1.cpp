//subtract the product and sum of a digits of an integer
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer"<<endl;
    cin>>n;
    int b=n, a,sum=0,product=1;
    while(n!=0){
        a= n%10;
        sum = sum+a;
        product= product*a;
        n=n/10;
    }
    cout<<sum<<endl;
    cout<<product<<endl;
    cout<<"Result "<<(product-sum)<<endl;
}