#include<bits/stdc++.h>
using namespace std;

void func(int n, vector<int>&arr,vector<int>&ds,vector<vector<int>>&res,int freq[]){
    if(ds.size()==n){
        res.push_back(ds);
        return;
    }

    for(int i=0;i<n;i++){
        if(!freq[i]){
            freq[i]=1;
            ds.push_back(arr[i]);
            func(n,arr,ds,res,freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
}

int main(){
    vector<int>arr={1,2,4};
    int n=arr.size();
    vector<int>ds;
    vector<vector<int>>ans;
    int freq[n]={0};
    func(n,arr,ds,ans,freq);
    for(auto &i:ans){
        for(auto &j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
