#include<iostream>
using namespace std;
int main()
{

 int n,m;
 cout<<"enter the rows and column of an array:";
 cin>>n>>m;

  int arr[n][m];
  cout<<"enter the elements of an array : ";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
   
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
 return 0;
}