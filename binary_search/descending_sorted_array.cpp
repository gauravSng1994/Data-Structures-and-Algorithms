#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {20, 17, 15, 14, 13, 12, 10, 9, 8, 4};
    int required = 17;
    int start = 0, end = input.size()-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(input[mid] == required) {
            ans = mid;
            break;
        }else if( input[mid] > required) start = mid + 1;
        else end = mid - 1;
    }
    if(ans == -1) cout<<"Element does not exist in the given array";
    else cout<<"Element lies on the index : "<<ans;
}