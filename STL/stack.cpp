#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Harshita");
    s.push("Rohit");
    s.push("Dev");
    cout<<"Element on top "<<s.top()<<endl;
    s.pop();
    //top element is removed
    cout<<"top element " <<s.top();
}