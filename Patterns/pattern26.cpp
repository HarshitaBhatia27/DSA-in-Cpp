// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    while(i<=n)
    {
        // for first numeric triangle
        int j=1;
        while(j<=(n-i+1))
        {
            cout<<j;
            j++;
        }
        // for first set of stars
        int star=1;
        while(star<=(i-1))
        {
            cout<<"*";
            star++;
        }
        //for 2nd set of stars
        int star_2 = 1;
        while(star_2<=(i-1))
        {
            cout<<"*";
            star_2++;
        }
        // for second numeric triangle
        int k=1;
        int value=n-i+1;
        while(k<=value)
        {
            cout<<value;
            value=value-1;
            // k++;
        }
        cout<<endl;
        i++;
    }
}