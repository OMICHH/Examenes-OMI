#include <iostream>
using namespace std;
int arrOxi[10001];
int arrH2o[10001];
int n, k,oxi,h2o,maxOxi,diff;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i = 1 ; i <= n ; i++){
    cin>>arrOxi[i];
  }
  for(int i = 1 ; i <= n ; i++){
    cin>>arrH2o[i];
  }
  cin>>k;
  for(int i = 1 ; i <= k ; i++){
    oxi+=arrOxi[i];
    h2o+=arrH2o[i];
  }
  diff = oxi - h2o;
  if(diff>maxOxi){
    maxOxi = diff;
  }
  for(int i = 2 ; i <= n-k+1 ; i++){
    oxi -= arrOxi[i-1];
    oxi += arrOxi[i+k-1];
    h2o -= arrH2o[i-1];
    h2o += arrH2o[i+k-1];
      diff = oxi - h2o;
      if(diff>maxOxi){
        maxOxi = diff;
      }
  }
  cout<<maxOxi;
}