#include<algorithm>
void sort_zerosones(vector<int>&v){
    int n=v.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]!=0) {
            sort(v.begin(),v.end());
            count++;

        }
        
    }
   
    
   }
