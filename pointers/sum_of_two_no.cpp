#include<iostream>
using namespace std;
int main(){
    int x;
    int*p1=&x;
    int y;
    int*p2=&y;
    cout<<"Enter a number: ";
    cin>>*p1;
    cout<<"Enter a number: ";
    cin>>*p2;
    cout<<"The sum is:"<<*p1+*p2<<endl;
    cout<<"The sum is:"<<x+y;
}