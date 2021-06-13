#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,3,12,5,15,11};
    int k1 = 3, k2= 6, len = sizeof(arr)/sizeof(arr[0]);
    int min1,min2;
    int max = k2>k1 ? k2 : k1;
    int min = k2 == max ? k1 : k2;
    priority_queue<int> maxHeap;
    for(int i=0; i<len;++i){
        maxHeap.push(arr[i]);
        if(maxHeap.size()>max) maxHeap.pop();
    }
    min2 = maxHeap.top();
    maxHeap.pop();
    while(maxHeap.size()>min) maxHeap.pop();
    min1 = maxHeap.top();

    int sum = 0;
    for(int i=0; i<len; ++i) if(arr[i]<min2 && arr[i]>min1) sum+=arr[i];

    cout<<"Required sum is : "<<sum<<endl;
}