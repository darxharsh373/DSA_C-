#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"no. of rows:";
    cin>>n;
    // cout<<"No. of columns: ";
    // cin>>m;
    for(i=1;i<=n;i++){
        int a=1;
      for(j=1;j<=i;j++){
        cout<<a;
        a+=2;
      }
      cout<<endl;
    }
}