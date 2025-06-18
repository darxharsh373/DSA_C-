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
int min=INT_MAX ;
// int min=arr[0] ;

for(int i=1;i<size;i++){
   if(min>arr[i]) min=arr[i];

}
cout<<"the min no in an array is "<<min;


 return 0;
}