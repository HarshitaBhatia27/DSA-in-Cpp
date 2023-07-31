//check if LL is circular or not
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    ~Node()
    {
        int val=this->data;
        if(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for value "<<val<<endl;
    }

};
void insertnode(Node* &tail,int element, int val)
{
    //assuming element is present in list

    //empty list
    if(tail==NULL)
    {
        Node* temp= new Node(val);
        tail=temp;
        temp->next=temp;
    }
    else{
        Node * curr=tail;
        while(curr->data !=element)
        {
            curr=curr->next; //jab tk element nhi milta
        }
        Node* temp=new Node(val);
        temp->next= curr->next;
        curr->next=temp;


    }

}
bool isCircular(Node* & tail)
{
    if(tail==NULL)
        return true;
    Node* temp=tail->next;
    while(temp!=NULL && temp!=tail)
    {
        temp=temp->next;
    }
    if(temp==tail)
        return true;
    else
        return false;
}
void print(Node* &tail)
{
    Node* temp=tail;
    if(tail==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
int main()
{
    Node* tail=NULL;
    insertnode(tail,10,2);
    insertnode(tail,2,3);
    insertnode(tail,2,7);
    insertnode(tail,7,5);
    print(tail);

    if(isCircular(tail))
    {
        cout<<"Linked List is circular"<<endl;
    }
    else 
        cout<<"List is not circular"<<endl;
    return 0;
}