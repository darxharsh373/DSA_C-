#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"no. of rows:";
    cin>>n;
    int nst=1;
    int nsp=n-1;
   
    for(i=1;i<=2*n-1;i++){
        //spaces
      for(j=1;j<=nsp;j++){
        cout<<" ";
        
      }
      if(i<=n-1) nsp--;
      else nsp++;
      //stars
      for(k=1;k<=nst;k++){
        cout<<"*";
        
      }
      if(i<=n-1) nst+=2;
      else  nst-=2;

      cout<<endl;
    }
}