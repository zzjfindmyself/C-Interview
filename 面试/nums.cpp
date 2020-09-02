#include <bits/stdc++.h>
using namespace std;

int N,n,k;
vector<int> vis;
vector<vector<int>> ans;
int cnt=0;

void dfs(vector<int> vis,int sum,int n,vector<int> tmp){
    if(cnt==k)return;
    if(n==0){
        if(sum==0){
            ans.push_back(tmp);cnt++;
        }
        else return;
    }
    int i=1;
    if(tmp.size())i=tmp.back();
    for(;i<=sum;i++){
    
        if(vis[i])continue;
        vis[i]=1;
        tmp.push_back(i);
        dfs(vis,sum-i,n-1,tmp);
        tmp.pop_back();
        vis[i]=0;
    }
}
int main(){
    cin>>N>>n>>k;
    vis = vector<int>(N,0);
    dfs(vis,N,n,{});
    auto x = ans.back();
    for(int num : x)
        cout<<num<<endl;
    return 0;
}