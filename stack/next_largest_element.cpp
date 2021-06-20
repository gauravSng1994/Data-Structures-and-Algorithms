#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v = {1, 3, 2, 4};
    int len = v.size();

    stack<int> ans, nextLargest;

    for(int i = len-1; i>=0; --i){
        while(!nextLargest.empty() && nextLargest.top() <= v[i]) nextLargest.pop();
        if(nextLargest.empty()) ans.push(-1);
        else ans.push(nextLargest.top());
        nextLargest.push(v[i]);
    }
    while(!ans.empty()){
        cout<< ans.top()<<" ";
        ans.pop();
    }
}