// for every subarray of size k, print the first nagative number if it exists else print '0'

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> input = {12,-1,-7,8,-15,30,16,28};
    int k = 3, len = input.size();
    queue<int> q;
    int i=0,j=0;
    while(i<len && j<len){
        if(input[j]<0) q.push(input[j]);
        if(j-i+1 == k){
            cout<< (!q.empty() ? q.front() : 0)<<" ";
            if(input[i] == q.front()) q.pop();
            i++;
        }
        ++j;
    }

    // int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    // int k = 3, len = sizeof(arr)/sizeof(arr[0]);
    // int i=0,j=0,vi=0;
    // list<int> l;
    // while(i<len && j<len){
    //     if(arr[j] < 0) l.push_back(arr[j]);
    //     if( j - i +1 == k){
    //         if(l.size()>0) {
    //             cout<<l.front()<<" ";
    //             if(l.front() == arr[i]) l.pop_front();
    //         }else cout<<0<<" ";
    //         ++i;
    //     }
    //     ++j;
    // }
}