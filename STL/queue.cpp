#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Harshita");
    q.push("ROhit");

    cout<<"First element "<<q.front()<<endl;
    cout<<"Last element "<<q.back()<<endl;

    q.pop();
    cout<<"First element "<<q.front();

    return 0;
}