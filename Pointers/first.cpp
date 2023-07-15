#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *ptr=&num;
    cout<<"Adress of variable: "<<ptr<<endl;
    cout<<"Address of pointer: "<<&ptr<<endl;
    cout<<"Value of variable: "<<*ptr<<endl;

// pointer to int is created and pointing to some garbage address. ---> bad practice
    // int *p=0;  
   // cout<<*p<<endl;

   (*ptr)++;
   cout<<"Value after : "<<num;

   //copying a pointer
   int *q=ptr;
   cout<<ptr<<" "<<q<<endl;
   cout<<*ptr<<" "<<*q<<endl;
   
   int i=3;
   int *t=&i;
   *t= *t+1;
cout<<i<<endl;
cout<<t<<endl;
t=t+1;
cout<<t<<endl; //it start pointing to the next integer


}