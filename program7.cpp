#include <iostream>
using namespace std;
int main()
{
int elements;
cout<<"Enter the number of elemens in they array:-"<<endl;
cin>>elements;
int arr[elements];
for (int i=0;i<elements;i++)
{
    cout<<"Ente the "<<i+1<<"th element of the array"<<endl;
    cin>>arr[elements];
}
int sum=0;
for (int i=0;i<elements;i++)
{
sum+=arr[elements];
}
cout<<sum<<endl;
}