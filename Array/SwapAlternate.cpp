//swap alternate elements
#include<iostream>
using namespace std;
void printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void swapAlternate(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1 < n)
        {
            swap(a[i],a[i+1]);
        }
    }
}
int main()
{
       int even[8]={5,2,9,4,7,6,1,0};
       int odd[5]={11,33,44,55,66};
       swapAlternate(even,8);
       printArray(even,8);
       
       cout<<endl;
       swapAlternate(odd,5);
       printArray(odd,5);

}