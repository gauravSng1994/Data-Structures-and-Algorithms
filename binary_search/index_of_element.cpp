#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {1,2,3,4,5,6,7,8,9,10};
    int find = 1;
    int start = 0, end = input.size()-1;
    int ans = -1;
    while(start<= end){
        int mid = (start + end)/2;
        // cout<<"start: "<<start<<", end: "<<end<<", mid: "<<mid<<endl;
        if(input[mid] == find) {
            ans = mid;
            break;
        }else if(input[mid] < find) start = mid+1;
        else end = mid -1 ;
    }
    if(ans == -1) cout<<"Element does not exist in the given array";
    else cout<<"Element lies on the index : "<<ans;
}