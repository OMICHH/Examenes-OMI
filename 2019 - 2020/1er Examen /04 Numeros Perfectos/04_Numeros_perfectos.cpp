#include <iostream>
using namespace std;

// 6 28 496 8128

int main (){
    int num = 0; 
    int sum = 0; 
    
        cin>> num ; 

        for(int i = 1 ; i< num ; i++){
            if(num%i == 0){
                sum += i;
            }
        } 
        if(sum == num){
            cout<<"SI"<<endl;
        }else {
            cout<<"NO"<<endl;
        }

}