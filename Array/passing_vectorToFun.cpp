#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void change(vector<int>&a){
    a[0]=100;
    
}
int main()
{
    vector<int>v;
    v.push_back(670);
    v.push_back(7578);
    v.push_back(89);
    v.push_back(745);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
}