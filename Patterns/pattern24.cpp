//       1
//     2 3 
//   4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    int value=1;
    while(row<=n)
    {
        int space=1;
        while(space<=(n-row))
        { cout<<" ";
          space++;
        }
        int col=1;
        
        while(col<=row)
        {
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row=row+1;
    }
}