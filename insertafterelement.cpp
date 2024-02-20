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
    cout<<"Before inserting the element"<<endl;
    ptr=start;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    struct Node* preptr=NULL;
    ptr=start;
    int value;
    cout<<"Enter value to insert new node after:"<<endl;
    cin>>value;
    bool found;
    while(ptr)
    {
        if(preptr->data==value)
        {
            found=true;
            break;
        }
        else
        { preptr=ptr;
            ptr=ptr->next;
            found=false;
        }
    }
    struct Node* insertnode=new Node();
    if (ptr==start)
    {
        insertnode->next=start;
        start=insertnode;
    }
    else if(number>2 && ptr->next==NULL)
    {
        ptr->next=insertnode;
        insertnode->next=NULL;
    }
    else
    {
preptr->next=insertnode;
    insertnode->next=ptr;
    }
   ptr=start;
   if (found)
   {
    cout<<"After inserting "<<endl;
   while(ptr)
   {
    cout<<ptr->data<<endl;
    ptr=ptr->next;
   }
   }
   else
   {
    cout<<"No element found with data "<<value<<endl;
   }
}