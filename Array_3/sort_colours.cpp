//let be the three colours and indicate them with 0=red 1=green 2=blue
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortColors(vector<int>& nums) {
            int n=nums.size();
            int noz=0;
            int noo=0;
            int notw=0;
            for(int i=0;i<n;i++){
                if(nums[i]==0) noz++;
                else if(nums[i]==1) noo++;
                else notw++;
            }
            for(int i=0;i<n;i++){
                if(i<noz) nums[i]=0;
                else if(i<(noz+noo)) nums[i]=1;
                else nums[i]=2;
            }
            return;
        }


// using dutch flag algorithm
void sort_Colors(vector<int>& nums) {
      // one pass solution
      int lo=0;
      int mid=0;
      int hi=nums.size()-1;
      //always think of mid
      //0 to low-1>1
      while(mid<=hi){
        if(nums[mid]==2){
           int temp=nums[mid];
           nums[mid]=nums[hi];
           nums[hi]=temp;
           hi--;
            // nums [mid]=nums[hi];
            // nums[hi]=2;
        }
        else if(nums[mid]==0){
            int temp=nums[mid];
            nums[mid]=nums[lo];
            nums[lo]=temp;
            lo++;
            mid++;
        }
        else mid++;
      }
        return;
    }

int main()
{
    vector<int>v;
    int n;
    cout<<"enter size:";
    cin>>n;
    cout<<"entter array elements only 0 1 2 :";
    for(int i=0;i<n;i++){
      int q; cin>>q;
      v.push_back(q);
}
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    // sortColors(v);
    sort_Colors(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 
}