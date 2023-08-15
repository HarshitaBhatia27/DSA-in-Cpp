// stack using STL
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;

    s.push(2); //push
    s.push(3);
    s.pop();  // top element removed
    s.push(5);
    s.push(7);
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Is stack empty: "<<s.empty()<<endl;

    cout<<"Size of stack is: "<<s.size()<<endl;
    return 0;
    
}