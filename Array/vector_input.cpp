#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int>v(5); // when size is defined
    // for(int i=0;i<=5;i++){
    //     cin>>v[i];
    // }
    int n;
    cout<<"Enter the size of an array:";

    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<endl;
    }
    
  
 return 0;
}