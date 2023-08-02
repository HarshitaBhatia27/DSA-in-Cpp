//remove duplicates from unsorted LL
#include<iostream>
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
    // ~Node()
    // {
    //     int value=this->data;
    //     if(this->next!=NULL)
    //     {
    //         delete next;
    //         this->next=NULL;
    //     }
    //     cout<<"Deleted"<<endl;
    // }
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
void print(Node* head)
{
    Node *temp=head; 
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* removeDuplicates(Node* head) {
    if (head == NULL)
        return NULL;

    Node* current = head;
    while (current != NULL) {
        Node* runner = current;
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                Node* duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }

    return head;
}

int main()
{
    Node* node1=new Node(100);

    Node* head=node1; //head pointed to node1;
    Node* tail=node1; // single node mei head and tail same hi hoga
    InsertAtHead(head,12);
    InsertAtHead(head,12);
    InsertatTail(tail,15);
    InsertatTail(tail,20);
    Insertatmiddle(head,tail,1,20);
    print(head);
    removeDuplicates(head);
    print(head);
    return 0;
}
//TC= O(n2) and SC= O(n)
//second approach is that we can first sort the list and then use the algo to remove duplicates from sorted list that has TC of O(n).