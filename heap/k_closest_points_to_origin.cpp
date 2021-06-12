#include<iostream>
#include<bits/stdc++.h>

using namespace std;
typedef pair<int, pair<int,int>> pipii;
int main(){
    vector<vector<int>> v = {
        { 1, 3  },
        { -2, 2 },
        { 5, 8  },
        { 0, 1  } 
    };
    int k = 2;
    map<int,pair<int,int>> m;
    for (auto el : v) {
        int dist = (el[0] * el[0] + el[1] * el[1] );
        m[dist] = make_pair(el[0],el[1]);
    }
    priority_queue< pair<int,int >> maxHeap;
    for( auto el : m){
        // maxHeap.push(make_pair(el.first,el.second));
        // cout<<"("<<el.second.first<<", "<<el.second.second<<") : "<<el.first<<endl;
        maxHeap.push(el.second);
        if(maxHeap.size() > k) maxHeap.pop();
    }
    while(maxHeap.size()>0){
        cout<<maxHeap.top().first<<" "<<maxHeap.top().second<<endl;
        maxHeap.pop();
    }
}