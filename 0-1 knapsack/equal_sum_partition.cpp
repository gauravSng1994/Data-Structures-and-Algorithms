#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subsetSum(vector<int>,int);
bool equalSumPartition(vector<int>);
int main(){
    vector<int> arr = {479, 758, 315, 472, 730, 101, 460, 619}; // {1,5,11,5};
    cout<<equalSumPartition(arr);
}

bool equalSumPartition(vector<int>arr){
    int sum = 0, len = arr.size();
    for(auto el : arr) sum += el;
    cout<<sum<<endl;
    if(sum % 2 != 0) return false;
    return subsetSum(arr,sum/2);
}

bool subsetSum(vector<int> arr, int target){
    int len = arr.size();
    int dp[len+1][target+1];
    for(int i=0; i<len+1; ++i) dp[i][0] = true; /* when target is 0, it is always true to get a subset 
        whether we have any item available or not */
    for(int i=1; i<target+1; ++i) dp[0][i] = false; // no target can be acheived if no item is available.

    for(int i = 1; i < len+1; ++i){ // row to refer to items in the array
        for(int j=1; j<target+1; ++j){ // column to refer to increasing target
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
        }
    }
    return dp[len][target];
}