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
//By using virtual inheritance, the Animal base class is shared uniquely among the classes in the inheritance hierarchy, and the ambiguity is resolved. The code should compile and run without any issues.
class Dog:virtual public Animal{

    public:
    void bark()
    {
    cout<<"Dog is barking"<<endl;
    }
};
//multiple inheritance
class BabyDog:virtual public Animal,public Dog{
    public:
    void weep()
    {
        cout<<"Weeping"<<endl;
    }
};
int main()
{
    BabyDog b1;
    b1.Animal::speak();
    b1.bark();
    return 0;
}