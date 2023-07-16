#include<iostream>
using namespace std;
int main()
{
    char ch[10]= "Harshita";
    char *c=ch;
    cout<<c<<endl; //print the value of ch;
    cout<<ch<<endl; //value
    cout<<&ch<<endl; //address of ch[0];
    cout<< ch[0]<<endl;
    cout<< &c<<endl;
    cout<< *c<<endl;
    cout<< c+2;
    cout<< c[0]<<endl;

    char name[10]="SherBano";
    char *cptr = &name[0];
    cout<<cptr<<endl;
    cout<< cptr+8<<endl;


char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];

}