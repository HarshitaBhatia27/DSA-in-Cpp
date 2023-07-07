#include<iostream>
#include<vector>
using namespace std;
void rotate(vector <int>& nums,int k)
{
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++)
    {
        temp[(i+k)%nums.size()] = nums[i];
    }
    nums=temp; //copy the elements back to num array

    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i];
    }
}
int main()
{   
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    rotate(arr,3);
    return 0;
}