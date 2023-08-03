//sort 0s 1s and 2s in a LL
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
Node* sortLIst(Node* &head)
{
    int zeroCOunt=0;
    int oneCOunt=0;
    int twoCOunt=0;

    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
            zeroCOunt++;
        else if(temp->data==1)
            oneCOunt++;
        else
            twoCOunt++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(zeroCOunt!=0)
        {
            temp->data=0;
            zeroCOunt--;
        }
        else if(oneCOunt!=0)
        {
            temp->data=1;
            oneCOunt--;
        }
        else if(twoCOunt!=0)
        {
            temp->data=2;
            twoCOunt--;
        }
        temp=temp->next;
    }
    return head;
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
    Node* node1=new Node(0);

    Node* head=node1; //head pointed to node1;
    Node* tail=node1; // single node mei head and tail same hi hoga
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,0);
    InsertAtHead(head,2);
    print(head);

    sortLIst(head);
    print(head);


}