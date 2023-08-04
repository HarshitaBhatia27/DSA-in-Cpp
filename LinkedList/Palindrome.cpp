//check if list is palindrome or not?
// In this approach we have firstly created an array, then copied all the elements of list in an array and then checked for palindrome in an array
// TC= O(n) and SC=O(n)
#include<iostream>
#include<vector>
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
bool checkpalindrome(vector<int> arr){
          int n=arr.size();
          int start=0;
          int end=n-1;
          while(start<=end)
          {
              if(arr[start]!=arr[end])
                  return 0;
              start++;
              end--;
          }
          return 1;
      }
bool isPalindrome(Node *head)
    {
      
       vector<int> arr;
       Node* temp=head;
       while(temp!=NULL)
       {
           arr.push_back(temp->data);
           temp=temp->next;
       }
       return checkpalindrome(arr);
    }
int main()
{

    Node* head=NULL; //head pointed to node1;
    Node* tail=NULL; // single node mei head and tail same hi hoga
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    print(head);

    if(isPalindrome(head))
    {
        cout<<"List is Palindrome"<<endl;
    }
    else
        cout<<"Not palindrome"<<endl;


}