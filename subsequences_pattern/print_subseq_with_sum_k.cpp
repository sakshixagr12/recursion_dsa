#include<bits/stdc++.h>
using namespace std;

void printSubSum(int idx,vector<int>&ds,int sum,int k ,int n , vector<int>arr){
    if(idx==n){
        if(sum==k){
            for(auto it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }
    ds.push_back(arr[idx]);
    sum+=arr[idx];
    printSubSum(idx+1,ds,sum,k,n,arr);

    ds.pop_back();
    sum-=arr[idx];
    printSubSum(idx+1,ds,sum,k,n,arr);
}

int main(){
    vector<int>arr={1,2,3,4};
    int n = arr.size();
    vector<int>ds;
    int k = 3;
    printSubSum(0,ds,0,3,n,arr);
    return 0;
}