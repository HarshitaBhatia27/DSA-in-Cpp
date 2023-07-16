#include<iostream>
using namespace std;
void update(int **p2) {
    // p2 = p2 + 1;
    //kuch change hoga  - NO

    // *p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    // cout<<"Printing p, address of i "<<p<<endl;
    // cout<<"Address of p "<<&p<<endl;
    // cout<<"Value at p: "<<*p<<endl;


    // cout<<"Address of p "<<q<<endl;
    // cout<<"Adress of q "<<&q<<endl;
    // cout<<"Value at q/address of i "<<*q<<endl;
    // cout<<"Value at i "<<**q<<endl;

    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;

 }