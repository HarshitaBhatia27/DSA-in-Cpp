#include<iostream>
using namespace std;
int main()
{
    //creating n rows
    int row1[]={1,2,3,4};
    int row2[]= {3,8};
    int row3[]={22};

    int *jagged[]={row1,row2,row3};
    int sizes[]={4,2,1};

    for(int i=0;i<3;i++)
    {
        int *ptr=jagged[i];
        for(int j=0;j<sizes[i];j++)
        {
            cout<<*(ptr+j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}