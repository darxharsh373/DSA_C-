#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> result;
            for(int i=0;i<=nums.size()-2;i++){
                for(int j=i+1;j<=nums.size()-1;j++){
                    if(nums[i]+nums[j]==target){
                       result.push_back(i);
                       result.push_back(j);
                       return result;
                    }
                }
            }
            return result;
        }
};
int main(){
        int target;
    cout<<"enter the target:";
    cin>>target;
    vector<int>nums;
    int n;
    cout<<"enter size:";
    cin>>n;
    cout<<"enter array elements:";
    for(int i=0;i<n;i++){
        int q; cin>>q;
        nums.push_back(q);
    }
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    if(!result.empty()) {
        cout << "Indexes: (" << result[0] << ", " << result[1] << ")" << endl;
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
    
    }
    