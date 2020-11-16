#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool subsetSum(vector <int> arr, int target);

int main(){
    vector<int> arr = {2,3,7,8,10}; // given array
    int target = 11; // target sum
    cout<<subsetSum(arr,target);
}

bool subsetSum(vector<int>arr, int target){
    int len = arr.size(), sum = target;
    bool dp[len+1][target+1];
    
    // initialise the first element of every row with true
    for(int i=0; i<=len; ++i) dp[i][0] = true;
    // initialise the rest of the elements of first row with false
    for(int i=1; i<=target; ++i) dp[0][i] = false;

    for(int i=1; i<=len; ++i){
        for(int j=1; j<=target; ++j){
            if(arr[i-1] > j ) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-arr[i-1]] // include 
                || dp[i-1][j]; // don't include
        }
    }
    return dp[len][target];
}