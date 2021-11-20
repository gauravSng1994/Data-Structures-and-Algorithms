#include<iostream>

using namespace std;

// int steps=0;
void towerOfHanoi(int n, char sourcePeg,char auxPeg, char destPeg){
    if(n>0){
        towerOfHanoi(n-1,sourcePeg,destPeg,auxPeg);
        cout<<"Move "<<n<<" from "<<sourcePeg<<" ======> "<<destPeg<<endl;
        // steps++;
        towerOfHanoi(n-1,auxPeg,sourcePeg,destPeg);
    }
}

int main(){
    towerOfHanoi(5,'A','B','C');
    // cout<<"steps count : "<<steps;
}