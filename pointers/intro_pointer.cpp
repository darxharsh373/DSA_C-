#include<iostream>
using namespace std;
int main(){
    // float x=4.6;
    // float *p=&x;
    // int x=4;
    // int *p=&x;
    // char x='A';
    // char *p=&x;
    // bool x=true;
    // bool*p=&x;
    // cout<<&x<<endl;
    // cout<<p;
    int a=15;
    int *ptr=&a;
    int b=++(*ptr);
    cout<<a<<' '<<b;

}