//find the last occurence of x in the array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int x=8;
vector<int>v;
// v.push_back(670);
// v.push_back(7578);
// v.push_back(8);
// v.push_back(745);
// v.push_back(60);
// v.push_back(77);
// v.push_back(8);
// v.push_back(45);
int n;
cout<<"Enter the size of an array:";

cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
int idx=-1;
// for(int i=0;i<v.size();i++){
//     if(v[i]==x) idx=i;
// }
for(int i=v.size()-1;i>=0;i--){
    if(v[i]==x){
        idx=i;
        break;
    }
}
cout<<idx;
return 0;
}