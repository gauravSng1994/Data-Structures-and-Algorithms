#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {2, 5, 1, 8, 2, 9, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum=0, max = INT_MIN, k=3;
    int i=0, j=0;
    while(i<len && j<len){
        sum += arr[j]; 
        if( j-i+1 == k){
            if(sum > max) max = sum;
            sum -= arr[i++];
        }
        ++j;
    }
    cout<<"Max sum of subarray of size "<<len<<" is "<<max;
}