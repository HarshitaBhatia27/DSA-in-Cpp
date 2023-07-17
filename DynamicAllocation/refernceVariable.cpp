#include<iostream>
using namespace std;
int& func(int a){ // bad prcatice because the refernce variable is only within a scope of this fun
    int num= a;
    int &ans = num;
    return ans;
}
int main()
{
    int i=5;
    func(i);
    return 0;
}