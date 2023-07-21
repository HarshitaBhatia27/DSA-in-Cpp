//gievn an array, find its power sets
#include<iostream>
#include<vector>
using namespace std;
void printPowerSets(const vector<vector<int>>& ans) {
    for (const vector<int>& subset : ans) {
        cout << "{";
        for (size_t i = 0; i < subset.size(); ++i) {
            cout << subset[i];
            if (i != subset.size() - 1) {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
}
void solve(vector<int> nums,vector<int> output, int index,vector<vector<int>> &ans){
                //base case
                if(index>=nums.size())
                {
                    ans.push_back(output);
                    return;
                }

                solve(nums,output,index+1,ans); //exclude

                int element=nums[index];
                output.push_back(element);
                solve(nums,output,index+1,ans);    //include
}
vector<vector<int> > subsets(vector<int> nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;
    solve(nums,output,index,ans);
    printPowerSets(ans);
}
int main()
{
    vector<int> nums={1,2,3};
    subsets(nums);
}