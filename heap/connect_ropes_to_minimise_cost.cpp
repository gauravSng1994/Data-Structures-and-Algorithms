#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0;i<len;++i) minHeap.push(arr[i]);
    int cost = 0;
    while(minHeap.size()>1){
        int min1,min2;
        min1 = minHeap.top();
        minHeap.pop();
        min2 = minHeap.top();
        minHeap.pop();
        cost += min1+min2;
        minHeap.push(min1+min2);
    }

    cout<<"Min cost is : "<<cost<<endl;
}