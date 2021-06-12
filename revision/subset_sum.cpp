#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int> &v, int target);

int main(){
    vector<int> arr = {2,3,7,8,10};
    int target = 11;
    cout<<subsetSum(arr,target)<<endl;
}

bool subsetSum(vector<int>& v,int target){
    int len = v.size();
    bool dp[len+1][target+1];
    for(int i=1;i<=target;i++) dp[0][i] = false;
    for(int i=0;i<=len;i++) dp[i][0] = true;

    for(int i=1; i<=len;i++){
        for(int j=1; j<target+1;j++){
            if(v[i-1]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-v[i-1]] || dp[i-1][j];
        }
    }
    return dp[len][target];
}