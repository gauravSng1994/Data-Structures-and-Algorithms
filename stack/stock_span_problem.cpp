#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {100, 80, 60, 70, 60, 75, 85};
    stack<pair<int,int>> st;
    vector<int> ans;

    for( int i = 0; i<input.size(); ++i){
        while(!st.empty() && st.top().first < input[i]) st.pop();
        ans.push_back(st.empty() ? 1 : (i - st.top().second));
        st.push(make_pair(input[i],i));
    }

    for(auto el : ans) cout<<el<<" ";
}