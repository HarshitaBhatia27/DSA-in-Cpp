//given two nos a and b, find the no. of total set bits in a and b
#include<iostream>
using namespace std;
unsigned int countSetBits(unsigned int n) //for positive integer
{
    unsigned int count = 0;
    while (n!=0) {
        if(n&1)
            count++;
        n=n>>1;
    }
    return count;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int c= countSetBits(a);
    int d= countSetBits(b);
    int e= c+d;
    cout<<e;
    return 0;
}