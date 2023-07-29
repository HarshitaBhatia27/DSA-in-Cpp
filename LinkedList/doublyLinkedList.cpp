#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node * prev; //pointer to previous node
    Node * next; //pointer to next node

    Node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL; //initially they will point to null
    }
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory deleted at value "<< value<<endl;
    }
};
void print(Node* head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAthead(Node* &head,Node* &tail, int d)
{
    if(head==NULL) //empty list
    {
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(d);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insertATTail(Node * &tail,Node* &head,int d)
{
    if(tail==NULL)
    {
         Node* temp=new Node(d);
         tail=temp;
         head=temp;
    }
    else{
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void insertAtPos(int position,Node* &head, Node* & tail,int d){
    
    if(position==1)
    {
        insertAthead(head,tail,d);
        if (tail == NULL) {
            tail = head; // If the list was empty, tail should point to the new head.
        }
        return;
    }
    Node *temp = head;
    int cnt=1;
    while(cnt<position-1 && temp!=NULL)
    {
        
        temp=temp->next; //temp will be the node prev to pos we want to insert
        cnt++;
    }
    if(temp->next==NULL)
    {
        insertATTail(tail,head,d); //if position is last
        return;
    }

    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;


}
void deleteNode(int position,Node* &head, Node* &tail)
{
    if(position==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        if(head==NULL)
        {
            tail=NULL;
        }
    }
    else{
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
            return;
        if(curr==tail)
        {
            tail=prev;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int getLength(Node* &head)
{
    Node* temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}
int main()
{
    //Node* node1=new Node(10);
    Node * head= NULL;
    Node* tail=NULL;
    insertAthead(head,tail,20);
    insertAthead(head,tail,30);
    insertAthead(head,tail,40);
    print(head);
    insertATTail(tail,head,1);
    insertATTail(tail,head,2);
    print(head);
    insertAtPos(3,head,tail,27);
    print(head);
    insertAtPos(1,head,tail,26);
    print(head);
    insertAtPos(8,head,tail,23);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    int length=getLength(head);
    cout<<"Length of list: "<<length<<endl;

    deleteNode(8,head,tail);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    print(head);
    
    
    return 0;
}