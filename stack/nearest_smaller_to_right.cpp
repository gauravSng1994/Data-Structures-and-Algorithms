#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {4, 5, 2, 10, 8};
    stack<int> st,ans;

    for(int i= input.size()-1; i>=0; --i){
        while(!st.empty() && st.top() >= input[i]) st.pop();
        ans.push( st.empty() ? -1 : st.top());
        st.push(input[i]);
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
}