#include<bits/stdc++.h>
using namespace std;
int arr [1000001];
long long  n , m , _max, top, mid, bttn, tala;
int main(){
  cin>>n>>m;
  for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
    if(_max<arr[i]){
      _max = arr[i];
    }
  }
  top=_max;
  while(bttn < top){
    tala=0;
    mid = ( top + bttn + 1 )/2;
    for(int i = 0 ; i < n ; i++){
      if(arr[i]-mid>=0){
        tala+=arr[i]-mid;
      }
    }
    if(tala>=m){
      bttn = mid;
    }else{
      top = mid-1;
    }
  }
  cout<<bttn<<endl;
}