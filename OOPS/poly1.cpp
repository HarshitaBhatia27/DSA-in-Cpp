//operator overloading
#include<iostream>
using namespace std;
class D{
    public:
    int a;
    int b;
    int add()
    {
        return a+b;
    }
    void operator+ (D &obj)
    {
          int value1= this->a;
          int value2 = obj.a;
          cout<<"output "<<value2-value1<<endl;
    }


};
int main()
{
    D obj1,obj2;
    obj1.a=4;
    obj2.a=7;
    obj1+obj2;
    return 0;
}