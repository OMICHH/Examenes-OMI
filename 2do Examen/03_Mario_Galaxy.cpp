#include <iostream>
using namespace std;
int arr[101];
int n = 0 , p = 0, q = 0, cont=0;
int p_dato, q_dato;
int main (){
    cin>>n>>p;
    for(int i  = 0 ; i < p ; i++){
        cin>>p_dato;
        if(arr[p_dato]==0){
            cont++;            
        }
        arr[p_dato]=1;
    }

    cin>>q;
    
    for(int i  = 0 ; i < q ; i++){
        cin>>q_dato;
        if(arr[q_dato]==0){
            cont++;
        }
        arr[q_dato]=1;
    }

    if(cont == n){
        cout<<"Me convertire en campeon."<<endl;
    }else{
        cout<<"Oh, el control no funciona!"<<endl;
    }
}