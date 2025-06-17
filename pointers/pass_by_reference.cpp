#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
   

}

int main(){
    int a,b;
    cout<<"enter A and B:";
    cin>>a>>b;
    
    swap(&a,&b);
    cout<<a<<endl<<b;


    

}