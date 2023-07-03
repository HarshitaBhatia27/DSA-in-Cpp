#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> maxi; //max_heap

    priority_queue<int, vector<int>, greater<int>> mini; //min heap

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    int n=maxi.size();
    cout<<"Max heap"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(0);
    mini.push(10);
    mini.push(1);
    
    int p=mini.size();
    cout<<"Min heap"<<endl;
    for(int i=0;i<p;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }
}