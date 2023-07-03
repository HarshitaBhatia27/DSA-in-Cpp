// ****
// ***
// **
// *
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    
    while(row<=n)
    {
        // int space=n-row; 
        // // space print
        // while(space)
        // {  
        //     cout<<" ";
        //     space=space-1;
        // }
        int j=1;
        while(j<=(n-row+1))
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        row=row+1;
    }
}