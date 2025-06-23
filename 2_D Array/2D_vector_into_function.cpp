#include<iostream>
#include<vector>
using namespace std;
// void change(int a[]){
//     a[0]=9;
// }
// void change2D(int arr[3][3]){
//     arr[0][0]=100;
// }


void change_2D_vector(vector<vector<int>>&v){
    v[0][1]=100;
}
void length(vector<vector<int>>&v){
    cout<<v.size();
}
int main()
{
//   int a[3]={1,2,3};
//   cout<<a[0]<<endl;
//   change(a);
//   cout<<a[0];


//   int arr[3][3]={{1,2,3},{4,6,7},{23,4,6}};
//   cout<<arr[0][0]<<endl;
//   change2D(arr);
//   cout<<arr[0][0]<<endl;
//  return 0;


 vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(25);
    v2.push_back(6);
    v2.push_back(7);
    vector<int>v3;
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(0);
    v3.push_back(386);
    v3.push_back(668);
    v3.push_back(36);

    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
   
   
   
    cout<<v[0][0]<<endl;

   change_2D_vector(v);
   cout<<v[0][1]<<endl;

   length(v);
}