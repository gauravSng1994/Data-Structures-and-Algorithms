#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = { 20,55,32,96,56,42,7,33 };
    int k=3;
    int len = sizeof(arr)/sizeof(arr[0]);
    // cout<<"Enter a value between 1 and "<<len<<endl;
    // cin>>k;
    priority_queue<int> maxHeap;
    for(int i =0; i<len; ++i){
        maxHeap.push(arr[i]);
        if(maxHeap.size()>3) maxHeap.pop();
    }
    cout<<k<<"th smallest number is : "<<maxHeap.top();
}