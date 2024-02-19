
// #include <iostream>
// using namespace std;

// int main() {
//     int count;
//     cout << "Enter the number of students in the class: " << endl;
//     cin >> count;

//     int passindsa = 0;
//     int failindsa = 0;

//     int arr[count];
//     for (int i = 0; i < count; i++) {
//         cout << "Enter the marks of " << i + 1 << "th student in DSA out of 100: " << endl;
//         cin >> arr[i];
//     }

//     for (int i = 0; i < count; i++) {
//         if (arr[i] >= 40) {
//             passindsa += 1;
//         } else {
//             failindsa += 1;
//         }
//     }

//     cout << "Passed students count: " << passindsa << endl;
//     cout << "Failed students count: " << failindsa << endl;

    
//     float percentage = (float)passindsa / count * 100;
    
//     cout << "Percentage of students passed is " << percentage << "%" << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// };
// int main()
// {
//     Node* n1= new Node();
//      Node* n2= new Node();
//       Node* n3= new Node();
//        Node* n4= new Node();
//        n1->data=1;
//        n1->next=n2;
//            n2->data=2;
//        n2->next=n3;  
//          n3->data=3;
//        n3->next=n4;
//            n4->data=4;
//        n4->next=NULL;
//        Node* ptr=n1;
//        while(ptr!=NULL)
//        {
//         cout<<ptr->data<<endl;
//         ptr=ptr->next;
//        }
//        int value=4;
//        ptr=n1;
//        Node* preptr=NULL;
//        Node* temp=n1;
       
//        while(ptr->data!=value)
//        {
//         temp=preptr;
//        preptr=ptr;
//        ptr=ptr->next;
//        }
//        temp->next=ptr;
       
//         ptr=n1;
//         Node* start=n1;
//         delete preptr;
//        while(start!=NULL)
//        {
//         cout<<start->data<<endl;
//         start=start->next;
//        }
// int value=4;
// Node *preptr = NULL;
// Node *temp = n1;
// ptr=n1;
// while(ptr->data!=value)
// {
    
//         temp=preptr;
//         preptr=ptr;
//         ptr=ptr->next;
// }
// temp->next=ptr;
// Node* start=n1;
// delete preptr;
// cout<<"After deleting "<<endl;
// while(start!=NULL)
// {
//     cout<<start->data<<endl;
//     start=start->next;
// }

}
// #include <iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node* next;
// };
// int main()
// {

// Node* n1=new Node();
// Node* n2=new Node();
// Node* n3=new Node();
// Node* n4=new Node();
// Node* n5=new Node();
// n1->data=1;
// n1->next=n2;
// n2->data=2;
// n2->next=n3;
// n3->data=3;
// n3->next=n4;
// n4->data=4;
// n4->next=n5;
// n5->data=5;
// n5->next=NULL;
// Node* ptr = n1;

// cout<<"Before deleting "<<endl;
// while(ptr!=NULL)
// {
//     cout<<ptr->data<<endl;
//     ptr=ptr->next;
// }
// int value=4;
// Node *preptr = NULL;
// Node *temp = n1;
// ptr=n1;
// while(ptr->data!=value)
// {
    
//         temp=preptr;
//         preptr=ptr;
//         ptr=ptr->next;
// }
// temp->next=ptr;
// Node* start=n1;
// delete preptr;
// cout<<"After deleting "<<endl;
// while(start!=NULL)
// {
//     cout<<start->data<<endl;
//     start=start->next;
// }

// }