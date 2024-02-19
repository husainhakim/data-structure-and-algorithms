// Find the maximum and minimum elements in an array. Write a C++ program that takes an array as input and outputs the maximum and minimum elements
#include <iostream>
using namespace std;
int main()
{
int elements;
cout<<"Enter the number of elements in the array"<<endl;
cin>>elements;
int arr[elements];
for (int i =0;i<elements;i++)
{
    cout<<"Enter the "<<i+1<<"th element of the array"<<endl;
    cin>>arr[i];

}
 int max=arr[0];
int min=arr[0];

for ( int j=0;j<elements;j++)
{
 if (arr[j]>max)
 {
    max=arr[j];
 }
 if (arr[j]<min)
 {
    min=arr[j];
 }
}

cout<<"Smallest element = "<<min<<endl;
cout<<"Largest element = "<<max<<endl;
return 0;



}
