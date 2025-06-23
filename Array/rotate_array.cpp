//rotate the given array by k steps where k is non negative
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
    int k;
    cout<<"enter the value at which you want to rotate: ";
    cin>>k;
    if(k>size) k=k%size;
    reversepart(0,size-k-1,v);
    display(v);
    reversepart(size-k,size-1,v);
    display(v);
    reversepart(0,size-1,v);
    display(v);
 
}