#include <iostream>
using namespace std;
struct Node{
    struct Node* next;
    int data;
    Node()
    {
        cout<<"Enter data"<<endl;
        cin>>data;
        
    }
};
int main()
{
int number;
struct   Node* ptr=NULL;
struct Node*start=NULL;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>number;
    for (int i=0;i<number;i++)
    {
        struct Node* newnode=new Node();
       if (start==NULL)
       {
         start=newnode;
         ptr=newnode;
       }
       else{
        ptr->next=newnode;
        ptr=ptr->next;
       }
    }
    ptr=start;
    cout<<"Before inserting in the start"<<endl;
    while(ptr)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
Node* newnode1=new Node();
newnode1->next=start;
start=newnode1;
ptr=start;
cout<<"After inserting in the start"<<endl;
while(ptr)
{
    cout<<ptr->data<<endl;
    ptr=ptr->next;
}
}
