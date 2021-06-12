#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool equalSum(vector<int>&);
bool subsetSum(vector<int>&,int);

int main(){
    vector<int> v = {479, 758, 315, 472, 730, 101, 460, 619};
    cout<<equalSum(v);
}

bool equalSum(vector<int>&arr){
    int sum = 0,n=arr.size();
    for(int i=0; i<n;i++) sum += arr[i];
    if(sum % 2 != 0) return false;
    return subsetSum(arr,sum / 2);
}

bool subsetSum(vector<int> &arr,int target){
    int n = arr.size();
    bool dp[n+1][target+1];
    cout<<target<<endl;
    for(int i=0; i<n+1;i++) dp[i][0] = true;
    for(int i=1;i<target+1;i++) dp[0][i] = false;

    for(int i = 1; i < n+1; i++)
    for(int j = 1; j < target+1; j++){
        if(arr[i-1]>j) dp[i][j] = dp[i-1][j];
        else dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
    }
    return dp[n][target];
}