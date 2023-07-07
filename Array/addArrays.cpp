#include<iostream>
#include<vector>
using namespace std; 
vector<int> reverse(vector<int>& v)
{
	int s=0;
	int e=v.size()-1;
	while(s<e)
	{
		swap(v[s++],v[e--]);
	}
	for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int i=n-1;
	int j=m-1;
	int carry=0;
	vector<int> ans;
	while(i>=0 && j>=0)
	{
		int val1=a[i];
		int val2=b[j];

		int sum=val1+ val2 + carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	// if first array is larger
	while(i>=0)
	{
		int sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		i--;
	}
	//if second array is larger
	while(j>=0)
	{
		int sum=b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
		j--;
	}
	//if both are of same size
	while(carry!=0)
	{
		int sum=carry;
		carry=sum/10;
		sum=sum%10;
		ans.push_back(sum);
	}
	return reverse(ans);
}
int main()
{ 
    vector<int> v1{3,2};
    vector<int> v2{1,2,3};
    findArraySum(v1,2,v2,3);
    

    return 0;
}