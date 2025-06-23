//vector basics
#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>v; //you dont need to mention size
// insertin/input do not use[]
v.push_back(43);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
v.push_back(33);
cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;
v.push_back(44);
cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;
v.push_back(4);
cout<<v.size()<<endl;
// cout<<v.capacity()<<endl;
//if you want to update[]
// v[4]=4;
// cout<<v[0]<<" ";
// cout<<v[1]<<" ";
// cout<<v[2]<<" ";
// cout<<v[3]<<" ";
 return 0;
}