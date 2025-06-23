#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int>v;
    v.push_back(670);
    v.push_back(7578);
    v.push_back(89);
    v.push_back(745);
    // v.at(2)=90;
    // cout<<v.at(2);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
   //sort 
 sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
 return 0;
}