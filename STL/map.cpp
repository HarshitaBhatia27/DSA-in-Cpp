#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m; //key value pair

    m[1]="Harshita";
    m.insert({2,"Bhatia"});
    m[3]="Rohit";

    //printing keys n values
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(2); //finding iterator and printing keys
    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" ";
    }


}