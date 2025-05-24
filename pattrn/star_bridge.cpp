#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"no. of rows:";
    cin>>n;
    for(i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m=n-1; // new lines
    int nsp=1;
    for( i=1;i<=m;i++){
        for(j=1;j<=m+1-i;j++){
            cout<<"*";
        }
        for(k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp+=2;
        //stars
        for( j=1;j<=m+1-i;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}