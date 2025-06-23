#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<=4;i++){
    cout<<a[i]<<" ";}
    cout<<endl;
    return;
}
void change(int b[]){
    b[0]=10;
}
int main()
{
int arr[]={1,2,3,4,5};
// accessing the elements of array in another function
//updation,pass by value/reference?
display(arr);
change(arr);
display(arr);

 return 0;
}