#include <iostream>
using namespace std; 

int main (){
    int n, C, k; 
    cin >> n >> C >> k ;
    int mid = n/2;

    for (int i = 0 ; i < k ; i++){
        if(C<=mid){
            C*=2;
        }else {
            C = (C * 2) - 1;
            if(C>n){
                C = C - n;
            }
        }
    }
    cout<<C<<endl;
}