#include<iostream>
using namespace std;
void BubbleSort(int a[],int n)
{
    for(int i=1;i<n;i++) //no. of rounds
    {
        bool swapped=false;
        for(int j=0;j<n-i;j++) //comparison with adjacent element
        {
            if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    swapped=true;
                }
        }
        if(swapped==false)
            break;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int a[6]={64,45,12,22,11,0};
    BubbleSort(a,6);
    return 0;
}