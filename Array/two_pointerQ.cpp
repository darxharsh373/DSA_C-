// write a program to reverse the array without using any extra array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    
    }
    cout<<endl;
}
void reversepart(int i, int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
        
    }
}
int main()
{
    vector<int>v;
    int size;
    cout<<"enter the size of an array: ";
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    
    }
    display(v);
    // int i=0;
    // int j=v.size()-1;
    // while(i<=j){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }
    // for(int i=0,j=v.size()-1;i<=j;i++,j--){
    //     int temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    // }
    // reverse(v.begin(),v.end());
    reversepart(0,2,v);
    display(v);
 return 0;
}
