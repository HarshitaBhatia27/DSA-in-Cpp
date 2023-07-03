#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity when empty = "<<v.capacity()<<endl;

    //inserting elements
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //capacity after insertion
    cout<<"Capacity after inserting elements= "<<v.capacity()<<endl;

    //popping elements
    cout<<"array before popping"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    v.pop_back();
    cout<<"Array after popping"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }


   cout<<"Size and capacity before clear "<<v.size()<<" "<<v.capacity()<<endl;
   v.clear();
   cout<<"Size and capacity after clear "<<v.size()<<" "<<v.capacity()<<endl;
   
   vector<int> a(5,1); //vector a with size 5 and all elements 1
   for(int i:a){
    cout<<i;
   }
   cout<<endl;

   vector<int> b(a); //copy all elements of a in b
   for(int i:b)
   cout<<i;
}