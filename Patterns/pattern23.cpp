// 1 2 3 4
//   2 3 4
//     3 4
//       4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    
    while(row<=n)
    {
        int space=1;
        while(space<=(row-1))
        { cout<<" ";
          space++;
        }
        int col=1;
      //  int value=row;
        while(col<=(n-row+1))
        {
            cout<<row+col-1;
           // value++;
            col++;
        }
        cout<<endl;
        row=row+1;
    }
}