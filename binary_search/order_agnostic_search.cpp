/** Order of elements in the array is not known to us in advance, but we know that array is sorted*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector<int> input = {12,14,16,18,20};
    vector<int> input = {20, 18, 16, 14, 12};
    int required = 12;
    int ans = -1, len = input.size();
    if(len == 1){
        ans = input[0] == required ? 0 : ans;
    }else{
        int asc = input[0] < input[1] ? 1 : -1;
        int start = 0, end = len - 1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if( input[mid] == required){
                ans = mid;
                break;
            }else if( input[mid] < required && asc == 1) start = mid + 1;
            else if( input[mid] < required && asc == -1) end = mid - 1;
            else if( asc == 1) end = mid - 1;
            else start = mid + 1;
        }
    }
    if(ans == -1) cout<<"Element does not exist in the given array";
    else cout<<"Element exists at index : "<<ans;
}