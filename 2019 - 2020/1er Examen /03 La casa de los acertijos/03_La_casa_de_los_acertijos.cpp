#include <iostream>
using namespace std;

int main(){
    char izq1, izq2, der1, der2;
    cin>>izq1>>izq2>>der1>>der2;

    //Verificamos el camino izquierdo

    if(izq1 == 'P'){
        if(izq2 == 'G'){
            cout<<"IZQ";
        }     
    }else if(izq1 == 'E'){
        if(izq2 == 'C'){
            cout<<"IZQ";
        }
    }
    
    //Verificamos el camino derecho

    if(der1 == 'P'){
        if(der2 == 'G'){
            cout<<"DER";
        }
    }else{
        if(der2 == 'C'){
            cout<<"DER";
        }
    }
}