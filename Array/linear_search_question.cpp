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
int x;
cout<<"Enter the number to search in an array:";
cin>>x;
bool flag=false;
for(int i=0;i<size;i++){
    if(arr[i]==x) flag=true;

}
if(flag==true)cout<<"Elements found";
else cout<<"element is not present";

 return 0;
}