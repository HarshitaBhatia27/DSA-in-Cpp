// &,|,~,^
#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a^b)<<endl;

    //left shift and right shift operators

    cout<<(19<<1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(21<<2)<<endl;
    cout<<(19<<2)<<endl;

    //pre post increment/decrement 
    int i=10;
    cout<<(i++)<<endl; //10
    cout<<(++i)<<endl;  //12
    cout<<(i--)<<endl;  //12
    cout<<(--i)<<endl; //10

}