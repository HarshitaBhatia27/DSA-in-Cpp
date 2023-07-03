// given AP=(3*n)+7.Find the nth term
#include<iostream>
using namespace std;
int AP(int n)
{
    int Ap;
    for(int i=1;i<=n;i++)
    {
        Ap= (3*i)+7;
    }
    return Ap;
}
int main()
{
    int n;
    cin>>n;
    int ans=AP(n);
    cout<<ans;

}