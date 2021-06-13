#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {5,6,7,8,9,10};
    int k = 3, x = 7, len = sizeof(arr)/sizeof(arr[0]);

    priority_queue< pair<int,int>> maxHeap;
    for(int i=0; i<len; ++i){
        int absDiff = arr[i]-x > 0 ? arr[i]-x : x - arr[i];
        maxHeap.push(make_pair(absDiff,arr[i]));
        if(maxHeap.size()>k) maxHeap.pop();
    }
    while(maxHeap.size()>0){
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }
}