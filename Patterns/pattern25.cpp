//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
  
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
            cout<<col;
            col++;
        }
       //int k=1;
        int value=row-1;
        while(value)//k<=(row-1)
        {
            cout<<value;
            value--;
          //  k++;
        }
        cout<<endl;
        row=row+1;
    }
}