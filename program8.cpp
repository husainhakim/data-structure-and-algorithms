#include  <iostream>
using namespace std;
int main()
{ int product=1;
    int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int arr[n];
    for  (int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<"th element"<<endl;
        cin>>arr[i];
    }
    for (int i=0;i<n;i++)
    {
      product=product*arr[i];
    }
    cout<<product<<endl;
}


// #include <iostream>
// using namespace std;

// int main()
// {
//     for (int i = 2; i <= 100; i++)
//     {
//         bool isprime = true;

//         for (int j = 2; j <= i / 2; j++)
//         {
//             if (i % j == 0)
//             {
//                 isprime = false;
//                 break;  
//             }
//         }

//         if (isprime)
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }
