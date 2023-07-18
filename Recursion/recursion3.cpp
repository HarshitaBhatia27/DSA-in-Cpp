//print counting from n to 1
#include<iostream>
using namespace std;
void count(int n)
{
    if(n==1)
        cout<<n;
    else{
        cout<<n<<" ";
        count(n-1);
    }
}
int main()
{ 
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    count(n);
    return 0;
} 