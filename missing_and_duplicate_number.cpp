/** time complexity O(n); space complexity O(1) */

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {1,4,3,4,5,3};
    int len = input.size();
    int i=0;
    while(i<len){
        if(input[i] != input[input[i]-1]){
            int tmp = input[input[i]-1];
            input[input[i]-1] = input[i];
            input[i] = tmp;
        }else ++i;
    }
    vector<int> missings,duplicates;
    for(int i = 0; i < len; ++i){
        if(input[i] == i+1) continue;
        missings.push_back(i+1);
        duplicates.push_back(input[i]);    
    }
    cout<<"Missings : ";
    for(auto e : missings) cout<<e<<" ";
    cout<<endl<<"Duplicates : ";
    for(auto e : duplicates) cout<<e<<" ";
}