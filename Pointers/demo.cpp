#include<iostream>
using namespace std;
int main()
{
   int a,b;
   int *p1=&a;
   int *p2=&b;
   *p1=10;
   *p2 = *p1;
  p1=p2; //copying a pointer. 
 *p1=20;
   cout<<a<<" "<<b<<" "<<*p1<<" "<<*p2;
}