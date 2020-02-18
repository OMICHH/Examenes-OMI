#include <iostream>
using namespace std;

int main (){
    int num, cambio;
    cin>>num;
    cambio  = num; 

    int pennis = 0;                //  1 
    int nickels =0;                       //  5 
    int dime = 0;      // 10
    int quarter = 0;  // 25

    if(num>=25){
        cambio -= num%25;
        quarter = cambio/25;
        cambio  = num - quarter*25;
    }

    pennis = cambio % 10;
    dime = (cambio % 100 - pennis)/10;

    if(pennis>4){
        nickels++;
        pennis -= 5;
    }
      
    cout<<quarter<<" QUARTER(S), "<<dime<<" DIME(S), "<<nickels<<" NICKEL(S), "<<pennis<<" PENNY(S)"<<endl;    
}