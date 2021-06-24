#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    // vector<int> input = {1,3,-1,-3,5,3,6,7}; //case 1
    vector<int> input = {1,3,1,2,0,5}; //case 2
    int len = input.size(),k=3;
    deque<int> maxQueue;
    int i=0,j=0;
    while(i<len && j<len){
        while(!maxQueue.empty() && input[maxQueue.back()] <= input[j]) maxQueue.pop_back();
        maxQueue.push_back(j);
        if(j-i+1 == k){
            cout<<input[maxQueue.front()]<<" ";
            while(!maxQueue.empty() && maxQueue.front() <= i) maxQueue.pop_front();
            ++i;
        }
        ++j;
    }
}