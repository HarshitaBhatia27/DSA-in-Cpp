#include<iostream>
using namespace std;
class Human{
    public:
    
    int weight;
    int age;
    int height;

    int getAge()
    {
        return this->age;
    }
    int getHeight()
    {
        return this->height;
    }
};
class Female: public Human{
    public:
    string color; //all the public members of base class can be accessed anywhere

    void sleep()
    {
        cout<<"Female working"<<endl;
    }

};
class Male: protected Human{
    public:
    string color; //all the protected members of base class can be accessed in the child class only.

    void sleep()
    {
        cout<<"Female working"<<endl;
    }
    int getHeight()
    {
        return this->height;
    }

};

int main()
{
    Female f1;
    f1.age=20;
    cout<<f1.age<<endl;
    f1.sleep();
    Male m1;
    cout<<m1.getHeight()<<endl;
    
    return 0;
}