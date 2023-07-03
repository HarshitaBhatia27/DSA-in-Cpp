#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(50);

    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //find element in set
    cout<<"Is element present or not "<<s.count(2)<<endl;
    // set<int>::iterator it=s.begin();
    // it++;
    //find the iterator of element
    set<int>::iterator itr=s.find(2);

    //elements after the iterator
    for(auto it=itr; it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
}