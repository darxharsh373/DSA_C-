#include<iostream>
#include<climits>

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
// int max=arr[0];
int max=INT_MIN;

for(int i=1;i<size;i++){
   if(max<arr[i]) max=arr[i];

}
cout<<"the max no in an array is "<<max;


 return 0;
}