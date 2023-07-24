//encapsulation is wrapping up of data members and functions.When the data members are pvt ad functions are public, it is encapsulated. It is used to achieve data hiding.
#include<iostream>
using namespace std;
class Students{
    string name;
    int age;
    int height;

    public:
    int getAge()
    {
        return this->age;
    }
    int getHeight()
    {
        return this->height;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setHeight(int height)
    {
        this->height=height;
    }

};
int main()
{
    Students s;
    s.setAge(20);
    s.getAge();
    return 0;
}