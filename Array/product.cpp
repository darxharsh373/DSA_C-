#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"enter the size of an array:";
cin>>size;

int arr[size];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int product;
for(int i=0;i<size;i++){
    product*=arr[i];
}
cout<<product;
 return 0;
}