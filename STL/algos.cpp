#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int> v;
   v.push_back(1);
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);

   for(auto i:v)
   {
    cout<<i<<" ";
   }
   cout<<"Binary search "<<binary_search(v.begin(),v.end(),30);
   cout<<endl;
  
  //rotating 2 elements
   rotate(v.begin(),v.begin()+2,v.end());
   for(auto i:v)
   {
    cout<<i<<" ";
   }
}