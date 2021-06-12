#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = { 20,55,32,96,56,42,7,33 };
    int len = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0; i<len; ++i){
        minHeap.push(arr[i]);
        if(minHeap.size() > k) minHeap.pop();
    }

    cout<<k<<"th largest number is : "<<minHeap.top();
}