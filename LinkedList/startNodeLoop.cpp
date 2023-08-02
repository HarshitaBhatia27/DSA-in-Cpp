//find the start node of the loop using floyd algo
#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Deleted"<<endl;
    }
};
void InsertAtHead(Node* &head, int d)
{
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertatTail(Node* &tail, int d)
{
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
void Insertatmiddle(Node* &head,Node* & tail,int position,int d)
{
    Node* temp=head;
    int cnt=1;
    if(position==1)
    {
        InsertAtHead(head,d);
        if (tail == NULL) {
            tail = head; // If the list was empty, tail should point to the new head.
        }
        return;
    }
    while(cnt<position-1 && temp!=NULL)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last post
    if(temp->next==NULL)
    {
        InsertatTail(tail,d);
        return;
    }
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next=temp->next;
    temp->next=nodeToinsert;
}

Node* floyd_algo(Node* head)
{
    if(head==NULL)
        return NULL;

    Node* fast=head;
    Node* slow=head;

    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
            fast=fast->next;

        slow=slow->next;
       
       if(slow==fast)
       {
        return slow;
       }

    }
    return NULL;
}
Node * getStartingNOde(Node* head)
{
    if(head==NULL)
      return NULL;
    Node* intersection=floyd_algo(head);

    Node* slow=head;
    while(slow!=intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}
void print(Node* &head)
{
    Node *temp=head; 
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(100);

    Node* head=node1; //head pointed to node1;
    Node* tail=node1; // single node mei head and tail same hi hoga
    InsertAtHead(head,12);
    
    InsertatTail(tail,15);
    
    Insertatmiddle(head,tail,1,20);
    tail->next=head->next;
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    
    Node* start=getStartingNOde(head);
    cout<<"Starting node is "<<start->data<<endl;

    
    return 0;
}
