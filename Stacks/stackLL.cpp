//implementation of stack using LL
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* link;

    Node(int data)
    {
        this->data=data;
        this->link=NULL;
    }
};
class Stack{
    public:
    Node* top;

    Stack()
    {
        top=NULL;
    }
    void push(int data)
    {
        Node* temp=new Node(data);

        if(!temp) //check if stack empty
        {
            cout<<"Stack overflow"<<endl;
        }

        temp->data=data;
        temp->link=top;
        top=temp;
    }

    void pop()
    {
        Node* temp;

        if(top==NULL)
        {
            cout<<"Stack undeflow"<<endl;
        }
        temp=top;
        top=top->link;

        free(temp);
    }
    bool isempty()
    {
        return top==NULL;
    }
    int peek()
    {
        Node*  temp;
        if(isempty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else{
            return top->data;
        }
    }
    void Display()
    {
        Node* temp;

        temp=top;
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" "<<endl;
            temp=temp->link;
        }
    }

};

int main(){
    Stack s;
 
    
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
 
    
    s.Display();
 
    
    cout << "\nTop element is " << s.peek() << endl;
 
   
    s.pop();
    s.pop();
 
    s.Display();
 
   
    cout << "\nTop element is " << s.peek() << endl;
    return 0;
    
}