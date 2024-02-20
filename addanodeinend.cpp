#include <iostream>
using namespace std;
struct Node{
struct Node* next;
int data;
Node()
{
    cout<<"Enter data:"<<endl;
    cin>>data;
}
};
int main()
{
    int number;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>number;
  struct  Node* ptr=NULL;
 struct   Node* start=NULL;
    for(int i=0;i<number;i++)
    {
       struct Node* newnode=new Node();
        if (start==NULL)
        {
            start=newnode;
            ptr=newnode;
        }
        else{
            ptr->next=newnode;
            ptr=newnode;
        }
    }
ptr=start;
cout<<"Before inserting in the end"<<endl;
while(ptr)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
Node* endnode=new Node();
ptr=start;
while(ptr->next)
{
    ptr=ptr->next;
}
ptr->next=endnode;
ptr=start;
cout<<"After inserting in the end "<<endl;
while(ptr)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}