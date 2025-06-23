#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
cout<<"Size is: "<<v.size()<<endl;
cout<<"capacity is: "<<v.capacity()<<endl;
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
cout<<"Size is: "<<v.size()<<endl;
cout<<"capacity is: "<<v.capacity()<<endl;

 return 0;
}