//stack implementation using array
#include<iostream>
using namespace std;
class Stack{

    //properties
    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0)
            top--;
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek()
    {
        if(top>=0 && top<size)
             return arr[top];
        else
            cout<<"Stack empty"<<endl;
    }
    bool isempty(){
        if(top == -1)
            return true;
        else
            return false;
    }
    void print(){
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Stack s(5);

    s.push(1);
    s.push(2);
    s.pop();
    s.push(8);
    s.push(4);
    
    cout<<"Is stack empty: "<<s.isempty()<<endl;
    s.push(10);
    s.push(11);
    s.print();
    cout<<"Top element: "<<s.peek()<<endl;
    return 0;
    
}