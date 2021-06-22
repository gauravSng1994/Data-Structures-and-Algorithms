#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findOccurance(vector<int>& input, int required, int firstOccurance = 1);
int main(){
    vector<int> input = {2,4,10,10,10,18,20};
    int required = 10;
    int first = findOccurance(input,required),last = findOccurance(input,required, -1);
    cout<<"First occurance : "<<first<<", last occurance: "<<last;
}

int findOccurance(vector<int>& input, int required, int firstOccurance){
    int ans = -1, start = 0, end = input.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if( input[mid] == required) {
            ans = mid;
            if(firstOccurance == 1){
                if(mid == 0 || input[mid-1] != required) return ans;
                end = mid - 1;
            }else{
                if(mid == input.size() - 1 || input[mid+1] != required) return ans;
                start = mid + 1;
            }
        }else if(input[mid] > required) end = mid -1;
        else start = mid + 1;
    }
    return ans; 
}