#include<iostream>
using namespace std;
//a single node in a linkedlist contain data and pointer to next node
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

void deleteNode(int position, Node* &head,Node* &tail)
{
    if(head==NULL)
        return;
    if(position==1) //start node
    {
         Node* temp=head;
          head=head->next;
          temp->next=NULL;
          delete temp; //memory free
          if(head==NULL)
          {
            tail=NULL;
          }
    }
    else{ //middle or last node
          Node* curr=head;
          Node* prev=NULL;
          int cnt=1;
          while(cnt<position && curr!=NULL)
          {
                 prev=curr;
                 curr=curr->next;
                 cnt++;
          }
          if(curr==NULL) 
              return;  //position out of bounds
          prev->next=curr->next;
          if(curr==tail)
          {
              tail=prev; //if last elememnt is deleted updating tail
          }
          curr->next=NULL;
          delete curr;
    }
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
    print(head);
    InsertAtHead(head,12);
    print(head);
    InsertatTail(tail,15);
    print(head);
    Insertatmiddle(head,tail,1,20);
    print(head);
    deleteNode(1,head,tail);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    return 0;
}