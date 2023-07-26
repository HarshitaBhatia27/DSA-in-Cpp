//compile time polymorphism
//function overloading
#include<iostream>
using namespace std;
class A{
    public:
    void sayHello()
    {
        cout<<"Hello Harshita"<<endl;
    }
    void sayHello(string name) //fun overloading by passing diff arguments is allowed
    {
        cout<<"Hello"<<name<<endl;
    }
    // int sayHello() //function overloading with same fun name but diff return type is not allowed.
    // {
    //     return 1;
    // }

};
int main()
{
    A obj;
    obj.sayHello();
    return 0;
}