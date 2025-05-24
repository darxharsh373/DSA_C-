#include<iostream>
using namespace std;
int main(){
    int n,i,j,m;
    cout<<"no. of rows:";
    cin>>n;
    cout<<"No. of columns: ";
    cin>>m;
   int a=5;
    for(i=1;i<=n;i++){
        if(i%2!=0) a=1; //for row no odd

        else a=0;  // for row no even
      for(j=1;j<=i;j++){
        cout<<a;
        // flipping
        if(a==1) a=0;
        else a=1;
      }
        
      cout<<endl;
    }
}
// 2nd method

