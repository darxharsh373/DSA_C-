#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cout<<"no. of rows:";
    cin>>n;
    cout<<"No. of columns: ";
    cin>>m;
    int k=1;
    for(i=1;i<=n;i++){
      for(j=1;j<=i;j++){
        cout<<k<<" ";
        k++;
      }
      cout<<endl;
    }
}