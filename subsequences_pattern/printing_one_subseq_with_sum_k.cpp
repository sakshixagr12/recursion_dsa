#include<bits/stdc++.h>
using namespace std;

bool printSubSum(int idx,vector<int>&ds,int sum,int k ,int n , vector<int>arr){
    if(idx==n){
        if(sum==k){
            for(auto it:ds) cout<<it<<" ";
            return true;//a valid subseq has been found so stop further recursion
        }
        return false;// no valid subseq found in  that branch,so continue searching
    }
    //take
    ds.push_back(arr[idx]);
    sum+=arr[idx];

    if( printSubSum(idx+1,ds,sum,k,n,arr))
        return true;
    //backtrack
    ds.pop_back();
    sum-=arr[idx];
    //dont take
    if(printSubSum(idx+1,ds,sum,k,n,arr))
        return true;
    return false;// if no subsequences is found
}

int main(){
    vector<int>arr={1,2,3,4};
    int n = arr.size();
    vector<int>ds;
    int k = 3;
    printSubSum(0,ds,0,3,n,arr);
    return 0;
}
