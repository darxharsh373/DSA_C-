#include<iostream>
using namespace std;
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
    //pass by alias
   

}
// void swap(int &a,int &b){
//    a=a+b;
//    b=a-b;
//    a=a-b;
   

// }
int main(){
    int a,b;
    cout<<"enter A and B:";
    cin>>a>>b;
    // int temp;
    // a=temp;
    // a=b;
    // b=temp;
    swap(a,b);
    cout<<a<<endl<<b;


    

}