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
void deleteNode(Node * &tail,int value)
{
    //if list is empty
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    
    Node * prev=tail;
    Node * curr=prev->next;
    while(curr->data!=value)
    {
        prev=curr;
        curr=curr->next;
    }

    prev->next=curr->next;
    if(curr==prev) //if LL has only 1 node
    {
        tail=NULL;
    }
    if(tail==curr)
    {
        tail=prev;
    }
    curr->next=NULL;
    delete curr;

    
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
   // Node* node1=new Node(10);
    Node* tail=NULL;
    insertnode(tail,10,2);
    //print(tail);
    insertnode(tail,2,3);
    print(tail);

    // insertnode(tail,2,7);
    // print(tail);
    // insertnode(tail,7,5);
    // print(tail);

    deleteNode(tail,2);
    print(tail);
    return 0;
}