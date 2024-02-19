// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of students:- ";
//     cin >> n;
//     string opinion;
//     int dsa[n];
//     int html[n];
//     int css[n];
//     int studentsPassed = 0;

//     for (int i = 0; i < n; i++) {
//         king:
//         cout << "Enter the marks of DSA of " << i + 1 << " Student:-";
//         cin >> dsa[i];
//         if (dsa[i] > 100) {
//             cout << "Invalid marks, please enter valid marks" << endl;
//             goto king;
//         }
//         gg:
//         cout << "Enter the marks of HTML of " << i + 1 << " Student:-";
//         cin >> html[i];
//         if (html[i] > 100) {
//             cout << "Invalid marks, please enter valid marks" << endl;
//             goto gg;
//         }
//         chaitu:
//         cout << "Enter the marks of CSS of " << i + 1 << " Student:-";
//         cin >> css[i];
//         if (css[i] > 100) {
//             cout << "Invalid marks, please enter valid marks" << endl;
//             goto chaitu;
//         }

//         if (dsa[i] >= 40 && html[i] >= 40 && css[i] >= 40) {
//             studentsPassed++;
//         }

//         cout << "Do you want to print the data up to index " << i + 1 << "? (yes/no):-";
//         cin >> opinion;
//         while (i!=n)
//         {
//         if (opinion == "yes") {
//             float passPercentage = float(studentsPassed) / (i + 1) * 100;
//             cout << "Overall Passing Percentage:- " << passPercentage << "%" << endl;
//             cout << "Overall Failed Percentage:- " << 100 - passPercentage << "%" << endl;
//             return 1;
//         }}
//     }

//     if (opinion != "yes") {
//         float passPercentage = float(studentsPassed) / n * 100;
//         cout << "Overall Passing Percentage:- " << passPercentage << "%" << endl;
//         cout << "Overall Failed Percentage:- " << 100 - passPercentage << "%" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;
// class Node
// {public:
// int data;
// Node* next;
// };
// int main()
// {
//     Node* n1=new Node();
//      Node* n2=new Node();
//      Node* n3=new Node();
//      Node* n4=new Node();
//     n1->data=1;
//     n1->next=n2;
//     n2->data=2;
//     n2->next=n3;
//     n3->data=3;
//     n3->next=n4;
//     n4->data=4;
//     n4->next=NULL;
//     Node* ptr=n1;
//     while(ptr!=NULL)
//     {
//         cout<<ptr->data<<endl;
//         ptr=ptr->next;
//     }
//     ptr=n1;
//     int value=2;
//     Node* temp=n1;
//     Node* preptr=NULL;
//     while(ptr->data!=value)
//     {
//         temp=preptr;
//         preptr=ptr;
//         ptr=ptr->next;
//     }
//     temp->next=ptr;
//     Node* start=n1;
//     delete preptr;
// while(start!=NULL)
// {
//     cout<<start->data<<endl;
//     start=start->next;
// }
// Node* preptr=NULL;
// while(ptr->data!=value)
// {
//     preptr=ptr;
//     ptr=ptr->next;
// }
// preptr->next=ptr;

// Node* temp=ptr->next;
// ptr->next=temp->next;
// delete temp;
// Node* start=n1;
// while(start!=NULL)

// {
//     cout<<start->data<<endl;
//     start=start->next;
int value=3;
Node* preptr=NULL;
ptr=n1;
while(ptr->data!=value)
{
    preptr=ptr;
    ptr=ptr->next;
}
Node* temp=ptr->next;
ptr->next=temp->next;
delete temp;
Node* start=n1;
while(start!=NULL)

{
    cout
}
}