// given an array of nmbers, sort them according to their frequency, i.e. number having highest frquncy will be printed first.
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {1,1,1,2,3,4,5,1,4,2,4,3,5,8,9,9,9,9,9,9,5,5,6,6,6};
    int k = 3, len = sizeof(arr)/sizeof(arr[0]);

    // priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > minHeap;
    priority_queue< pair<int,int> > maxHeap;
    map<int,int> m;

    for(int i=0; i<len; ++i) m[arr[i]] = (m.count(arr[i]) ? m[arr[i]] : 0) + 1;

    for( auto el : m ) maxHeap.push(make_pair(el.second,el.first));
    // priority_queue< pair<int,int> > pq2 = maxHeap;
    while(maxHeap.size()>0){
        cout<<maxHeap.top().second<<" ";
        maxHeap.pop();
    }
    // cout<<endl;
    // while(pq2.size()>0){
    //     cout<<pq2.top().second<<" : "<<pq2.top().first<<endl;
    //     pq2.pop();
    // }
}