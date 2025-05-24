#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cout<<"no. of rows:";
    cin>>n;
    cout<<"No. of columns: ";
    cin>>m;
    for(i=1;i<=n;i++){
      for(j=1;j<=n-i+1;j++){
        cout<<"*";
      }
      cout<<endl;
    }
}