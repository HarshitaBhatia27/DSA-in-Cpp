#include<iostream>
using namespace std;
class Animal{

    public:
    int age;
    int weight;

    void speak()
    {
        cout<<"Speaking"<<endl;
    }

};
class Dog:public Animal{

    public:
    void bark()
    {
    cout<<"Dog is barking"<<endl;
    }
};
//multilevel inheritance
class BabyDog:public Dog{
    public:
    void weeep()
    {
        cout<<"Weeping"<<endl;
    }
};

int main()
{
    BabyDog b;
    b.speak();
    b.bark();
    b.weeep();
    return 0;
}