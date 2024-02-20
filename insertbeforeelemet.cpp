#include <iostream>
using namespace std;
struct Node
{
    struct Node* next;
    int data;
    Node(){
cout<<"Enter data"<<endl;
cin>>data;
    }
};
int main()
{int number;
struct Node* start=NULL;
struct Node* ptr=NULL;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>number;
    for(int i=0;i<number;i++)
    {
        struct Node* newnode=new Node();
        if(start==NULL)
        {
            start=newnode;
            ptr=start;
        }
        else
        {
            ptr->next=newnode;
            ptr=ptr->next;
        }
    }
    cout<<"Before inserting before the element"<<endl;
    ptr=start;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    int value;
    cout<<"Enter value:"<<endl;
    cin>>value;
    ptr=start;
    Node* preptr=ptr;

    struct Node* insertnode=new Node();
    
   while(ptr)
   {
  if (ptr->data==value)
  {
    break;
  }
  else{
    preptr=ptr;
    ptr=ptr->next;
  }
   }
   if (ptr==start)
   {
    insertnode->next=start;
    start=insertnode;
   }
   else if (number>2 && ptr->next==NULL)
   {
    ptr->next=insertnode;
    insertnode->next=NULL;
   }
   else{
preptr->next=insertnode;
    insertnode->next=ptr;
   }
     ptr=start;
    cout<<"After inserting the new node before the node having value: "<<value<<endl;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}