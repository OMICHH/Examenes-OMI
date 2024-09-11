#include <iostream>
using namespace std; 

int main (){
    int n = 0 ; 
    int m = 0 ; 
    int na = 0;
    float calif = 0 ;
    float prom = 0 ;

    cin>>n>>m;

    for (int i = 0 ; i < n ; i++){
        cin>>calif;
        if(calif<m){
            na = 1;
        }
        prom = prom + calif ;
    }

    prom = prom / n; 

    if(na == 0){
        cout<< prom;
    }else{
        cout<<"NA";
    }

}