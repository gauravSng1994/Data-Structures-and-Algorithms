#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 3, len = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0; i<len; ++i){
        minHeap.push(arr[i]);
        if(minHeap.size()>k){
            cout<<minHeap.top()<<" ";
            minHeap.pop();
        }
    }

    while(minHeap.size()>0) {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
}