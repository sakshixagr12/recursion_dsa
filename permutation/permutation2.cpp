#include<bits/stdc++.h>
using namespace std;

void permutat(int idx,int n , vector<int>&arr,vector<vector<int>>&res){
    if(idx==n){
        res.push_back(arr);
        return;
    }
    for(int  i = idx; i<n ; i++) {
        swap(arr[idx],arr[i]);
        permutat(idx+1,n,arr,res);
        swap(arr[idx],arr[i]);//backtracking
    }

}

int main(){
    vector<int>arr={1,2,3};
    int n = arr.size();
    vector<vector<int>>res;
    permutat(0,n,arr,res);
    for(auto &i:res){
        for(auto &j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
