#include<iostream>
using namespace std;
int arn[10001];
int muestras[1001];
int q, n, k, minARN, _min;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>q;
  for(int a = 0 ; a < q ; a++){
    cin>>n>>k;
    for(int i = 0 ; i < n ; i++){
      cin>>arn[i];
      if(i<k){
        minARN += arn[i];
      }
    }
    _min = minARN;
    for(int i = 1 ; i <= n-k ; i++){
      minARN -= arn[i-1];
      minARN += arn[i+k-1];
      if(minARN<_min){
        _min = minARN;
      }
    }
    muestras[a]=_min;
    _min = 0;
    minARN = 0;
  }
  for(int a = 0 ; a < q ; a++){
    cout<<a+1<<" "<<muestras[a]<<endl;
  }
}