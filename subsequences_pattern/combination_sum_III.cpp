#include<bits/stdc++.h>
using namespace std;

void func(int cnt,int k,int n,vector<vector<int>>&ans,vector<int>&ds){

    if(n==0&&k==0){
        ans.push_back(ds);
        return;
    }
    if(n<0||k<0) return;
    for(int i=cnt;i<=9;i++) {
        if(i>n)break;
        //if current element is greater than the required sum,no need to add further elements.Just break the loop
        ds.push_back(i);//take the number
        func(i+1,k-1,n-i,ans,ds);
        ds.pop_back();//not taken condition

    }
}

int main(){
    int k;//number of elemens
    cin>>k;
    int n;//sum 
    cin>>n;
    vector<vector<int>>answer;
    vector<int>ds;
    func(1,k,n,answer,ds);
    //printing the answer
    for(auto it:answer){
        for(auto el:it){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0;
}
