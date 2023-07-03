#include<deque>
#include<iostream>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1); //inserting from back
    d.push_front(2); //inserting from beginning
    d.push_back(3);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.end(),d.end()+1);
    for(int i:d)
    {
        cout<<i<<" ";
    }
}