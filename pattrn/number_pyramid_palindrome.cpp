#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,q;
    cout<<"no. of rows:";
    cin>>n;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
           cout<<" ";
        }
        for(j=1;j<=i;j++){
          cout<<j;
          
        }
        for(q=i-1;q>=1;q--){
            cout<<q;
        }
        cout<<endl;
   
   
}
}