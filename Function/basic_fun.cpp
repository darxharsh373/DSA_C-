#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void greeting(){
     cout<<"Good Morning";
     cout<<"Have a nice day";
}
int main(){
//    greeting();
//    greeting();
//    greeting();
int a;
cout<<"Enter a number to print stars:";
cin>>a;
starTriangle(a);

  
  

}