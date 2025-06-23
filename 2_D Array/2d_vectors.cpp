#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // 1_d vector initilization
    // vector<int> v;
    // 2_D vector initilization
    // vector<vector<int>> v;


    // vector<int>v1;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // vector<int>v2;
    // v2.push_back(4);
    // v2.push_back(25);
    // v2.push_back(6);
    // v2.push_back(7);
    // vector<int>v3;
    // v3.push_back(8);
    // v3.push_back(9);
    // v3.push_back(0);
    // v3.push_back(386);
    // v3.push_back(668);
    // v3.push_back(36);

    // vector<vector<int>> v;
    // v.push_back(v1);
    // v.push_back(v2);
    // v.push_back(v3);

    // cout<<v[0][0];
    
     //vector declaration
    
    // vector<int>v1(3,4);
    // cout<<v1[0]<<" ";
    // cout<<v1[1]<<" ";
    // cout<<v1[2]<<" ";
    // cout<<v1[3]<<" ";

    vector<vector<int>>v(3,vector<int>(4,2));  //2 2 2 2
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v[0].size();






    return 0;
}