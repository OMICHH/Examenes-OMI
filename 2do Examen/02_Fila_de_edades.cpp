#include <iostream>
#include <algorithm>
using namespace std ; 
int arr[4];
int main (){
  for(int i = 0 ; i < 3 ; i++){
    cin>>arr[i];
  }
  sort(arr,arr+3);
  for(int i = arr[0]+1 ; i < arr[2] ; i++ ){
    if(i!=arr[1]){
      cout<<i<<" ";
    }else if((arr[0]+1==arr[1])&&(arr[1]+1==arr[2])){
      cout<<"NINGUNA";
    }
  }
}