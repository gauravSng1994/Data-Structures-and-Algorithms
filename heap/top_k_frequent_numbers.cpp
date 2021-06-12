#include<iostream>
#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main(){
    int arr[] = {1,1,1,2,3,4,5,1,4,2,4,3,5,8,9,9,9,9,9,9,5,5,6,6,6};
    int k = 3, len = sizeof(arr)/sizeof(arr[0]);
    priority_queue< pii, vector<pii>, greater<pii> > minHeap;
    map<int,int> m;
    for(int i =0; i<len; ++i){
        m[arr[i]] = (m.count(arr[i]) > 0 ? m[arr[i]] : 0 )+1;
        // else m[arr[i]] = 1;
    }
    for(auto el : m){
        minHeap.push(make_pair(el.second,el.first));
        if(minHeap.size()>k) minHeap.pop();
    }
    while(minHeap.size()>0){
        cout<<minHeap.top().second<<" ";
        minHeap.pop();
    }
}