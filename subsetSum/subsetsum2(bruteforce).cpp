class Solution {
public:

    void func(int idx,int n,vector<int>&arr,vector<vector<int>>&answer,vector<int>&ds){
        if(idx==n){
            answer.push_back(ds);
            return;
        }
        ds.push_back(arr[idx]);
        func(idx+1,n,arr,answer,ds);
        ds.pop_back();
        func(idx+1,n,arr,answer,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int>ds;
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        func(0,n,nums,ans,ds);
        set<vector<int>>s(ans.begin(),ans.end());
        vector<vector<int>>finalAns(s.begin(),s.end());
        return finalAns;
    }
};
