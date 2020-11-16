#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countOfSubsets(vector<int> arr,int sum);
int main(){
    vector<int> arr = {2,3,5,6,8,10};
    int sum = 10;
    cout<<countOfSubsets(arr,sum);
}


int countOfSubsets(vector<int> arr,int sum){
    int len = arr.size();
    int dp[len+1][sum+1];

    for(int i =0; i<len+1; ++i) dp[i][0] = 1;
    for(int j =1; j<sum+1; ++j) dp[0][j] = 0;

    for(int i=1; i<len+1; ++i){
        for(int j=1; j<sum+1; ++j){
            if(arr[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
        }
    }
    return dp[len][sum];
}