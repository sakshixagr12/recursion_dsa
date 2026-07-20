class Solution {
public:

    void findComb(int idx,int target,vector<int>&arr,vector<int>&ds,set<vector<int>>&ans){
        if(idx==arr.size()){
            if(target==0) ans.insert(ds);
            return;
        }
        
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findComb(idx+1,target-arr[idx],arr,ds,ans);
            ds.pop_back();
        }
        findComb(idx+1,target,arr,ds,ans);
      
        
        
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        set<vector<int>>ans;
        sort(candidates.begin(),candidates.end()); 
        
        findComb(0,target,candidates,ds,ans);
        vector<vector<int>>finalans(ans.begin(),ans.end());
        return finalans;
    }
};
