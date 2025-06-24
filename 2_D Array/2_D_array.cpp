#include<iostream>
using namespace std;
int main()
{
//   int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 int n,m;
 cout<<"enter the rows and column of an array:";
 cin>>n>>m;

  int arr[n][m];
  cout<<"enter the elements of an array : ";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    // cout<<endl;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
 return 0;
}
