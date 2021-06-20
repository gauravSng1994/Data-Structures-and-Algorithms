#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {4, 5, 2, 10, 8};
    vector<int> ans;
    stack<int> st;

    for(int i=0; i<input.size(); ++i){
        while(!st.empty() && st.top() > input[i]) st.pop();
        if(st.empty()) ans.push_back(-1);
        else ans.push_back(st.top());
        st.push(input[i]);
    }

    for(auto el : ans) cout<<el<<" ";
}