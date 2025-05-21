#include<iostream>
using namespace std;
int factorail(int x){
    if(x==0||x==1) return 1;
    else{
        return x*factorail(x-1);
    }
}
int main(){
    int a,c;
    cout<<"Enter a number to find a factorial:";
    cin>>a;
    c=factorail(a);
    cout<<"The factorail of a number is "<<c;


}