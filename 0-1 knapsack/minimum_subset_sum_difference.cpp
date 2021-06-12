#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minSubsetSumDiffernce(vector<int> arr);
int main(){
    // vector<int> arr = {5, 6, 6, 5, 7, 4, 7, 6}; // ans 0
    vector<int> arr = {1, 6, 11, 5}; //ans 1
    cout<<minSubsetSumDiffernce(arr);
}

int minSubsetSumDiffernce(vector<int> arr){
    sort(arr.begin(),arr.end());
    int sum = 0, len = arr.size();
    for(int i=0; i<len; ++i) sum+=arr[i];
    bool dp[len+1][sum+1];
    vector<int> ans={0};
    for(int i=0; i<len+1; ++i) dp[i][0] = true;
    for(int i=1; i<sum+1; ++i) dp[0][i] = false;
    
    for(int i=1; i<len+1; ++i){
        for(int j =1; j<sum+1; ++j){
            if(arr[i-1]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
            if(i==len && dp[i][j]) ans.push_back(j);
        }
    }
    // int min = INT_MAX;
    int ansInd = ans.size()%2 == 0 ? ans.size()/2 - 1 : ans.size()/2;
    return sum - 2 * ans[ansInd];
}