//This is a better approach of checking whether LL is palindrome or not
// TC=O(n) and SC=O(1)
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
Node* getmid(Node* &head)// fun to find mid of LL
{
    Node* fast=head->next;
    Node* slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* reverse(Node* temp){
    Node* curr=temp;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool ispalindrome(Node* &head){
    if(head->next==NULL)
        return true;
    

    //find middle
    Node* middle=getmid(head);

    //reverse list
    Node* temp=middle->next;
    middle->next=reverse(temp);
    

    //comapring 2 LL
    Node* head1=head;
    Node* head2=middle->next;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
            return false;
        head1=head1->next;
        head2=head2->next;
    }
    // reversing to get original list;
    temp=middle->next;
    middle->next=reverse(temp);
    return true;
}
int main()
{

    Node* head=NULL; 
    Node* tail=NULL; 
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,2);
    InsertAtHead(head,1);
    print(head);

    if(ispalindrome(head))
    {
        cout<<"List is Palindrome"<<endl;
    }
    else
        cout<<"Not palindrome"<<endl;


}