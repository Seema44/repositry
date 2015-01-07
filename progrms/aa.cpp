#include<iostream>
using namespace std;
int main()
{
int arr1[20],arr2[20],c,n;
cout<<"enter the number of elements in the array:\n";
cin>>n;

cout<<"enter the elements of first array:\n";
for(c=0;c<n;c++)
cin>>arr1[c];


cout<<"enter the elements of second array:\n";
for(c=0;c<n;c++)
cin>>arr2[c];

cout<<"sum of arrays:";
for(c=0;c<n;c++)
cout<<arr1[c]+arr2[c]<<endl;
return 0;
}
