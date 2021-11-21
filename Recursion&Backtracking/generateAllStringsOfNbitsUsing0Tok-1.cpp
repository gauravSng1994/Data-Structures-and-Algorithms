#include<iostream>

using namespace std;
void printAllStringsofNbitsUsing0ToK(int n,vector<int> nums,int k,int i){
    if(i==n){
        for(auto el:nums) cout<<el;
        cout<<endl;
        return;
    }
    for(int j=0;j<k;j++){
        nums[i] = j;
        printAllStringsofNbitsUsing0ToK(n,nums,k,i+1);
    }
}
int main(){
    // print All Strings of n Bits Using 0 To K-1
    int n = 4,k=3;
    vector<int> nums(n,0);
    printAllStringsofNbitsUsing0ToK(n,nums,k,0);
}