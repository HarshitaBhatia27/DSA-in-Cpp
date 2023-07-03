//       *
//     * *
//   * * *
// * * * *
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
        while(j<=(n-row))
        {
            cout<<" ";
            j++;
        }
        int col=1;
        while(col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row=row+1;
    }
}