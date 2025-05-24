#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cout<<" Enter odd no. of rows:";
    cin>>n;
    int mid=n/2 + 1;
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        if(i==j||i+j==n+1)
        cout<<"*";
        else cout<<" ";
      }
      cout<<endl;
    }
}