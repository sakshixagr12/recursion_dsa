#include <bits/stdc++.h>
using namespace std;

void func(int idx, int sum,int n,vector<int>&arr,vector<int>&subSetSum){
    if(idx==n){
        subSetSum.push_back(sum);
        return;
    }
    func(idx+1,sum+arr[idx],n,arr,subSetSum);
    func(idx+1,sum,n,arr,subSetSum);
}

int main(){
    vector<int>arr={1,5,6,2};
    int n = arr.size();
    vector<int>answer;
    sort(arr.begin(),arr.end());
    func(0,0,n,arr,answer);
    for(auto it:answer){
        cout<<it<<" ";
    }
    return 0;
}
