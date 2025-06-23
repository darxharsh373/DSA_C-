#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort_zerosones(vector<int>&v){
    int n=v.size();
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noz++;
        else noo++;
    }
   for(int i=0;i<n;i++){
    if(i<noz) v[i]=0;
    else v[i]=1; 
   }
}
void sort_zero_next(vector<int>&v){
    int n=v.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0) {
            swap(v[i],v[count]);
            count++;

        }
        
    }
   
    
}
void sort01_method2(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        // if(i>j) break;
        else if(v[i]==1&&v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
// void reverseArray(vector<int> &v) {
//     int n=v.size();
//     vector<int> temp(n);
//     for(int i=0;i<n;i++){
//         temp[i]=v[n-i-1];
//     }
//     for(int i=0;i<n;i++){
//         v[i]=temp[i];
//     }
    
// }
void reverseArray(vector<int> &v) {
    reverse(v.begin(),v.end());
    
}
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(4);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // sort(v.begin(),v.end());
    // sort_zero_next(v);
    // sort01_method2(v);
    // reverseArray(v);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
 
}