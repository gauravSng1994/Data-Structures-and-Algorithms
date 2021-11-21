#include<iostream>

using namespace std;
void printAllStringsofNbits(int n,vector<int> nums,int i){
    if(i==n){
        for(auto el:nums) cout<<el;
        cout<<endl;
        return;
    }
    nums[i] = 0;
    printAllStringsofNbits(n,nums,i+1);
    nums[i] = 1;
    printAllStringsofNbits(n,nums,i+1);
}
int main(){
    int n = 4;
    vector<int> nums(n,0);
    printAllStringsofNbits(n,nums,0);
}