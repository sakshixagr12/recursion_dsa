class Solution {
public:

    void func(int idx,int n,vector<int>&arr,vector<vector<int>>&answer,vector<int>&ds){
        
            answer.push_back(ds);
    
        
        for(int i = idx;i<n;i++){
            if(i>idx&&arr[i]==arr[i-1])continue;
            ds.push_back(arr[i]);
            func(i+1,n,arr,answer,ds);
            ds.pop_back();

        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        func(0,n,nums,ans,ds);
       
        return ans;
    }
};
