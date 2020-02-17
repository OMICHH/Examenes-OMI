#include<iostream>
using namespace std;
int arr[10001];
int n, tipo;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i = 0 ; i < n ; i++){
    cin>>tipo;
    arr[tipo]++;
  }
  for(int i = 0 ; i <= n ; i++){
    if(arr[i]>0){
      cout<<arr[i]<<" ";
    }
  }
}