#include <iostream>
#include <algorithm>
using namespace std ; 
long long int arrAngares[1000001];
long long int n, angar, mid, inicio, fin, cont;
int main (){
  cin.tie(0);
  ios_base::sync_with_stdio(0);
  cin>>n;
  for(int i = 0 ; i < n ; i++){
    cin>>arrAngares[i];
  }
  sort(arrAngares,arrAngares+n);
    cin>>angar;
    mid = 0;
    inicio = 0;
    fin = n-1;
    while(inicio<=fin){
      mid = (inicio + fin)/2;
      cont++;
      if(angar==arrAngares[mid]){
        break;
      }else if(angar>arrAngares[mid]){
        inicio = mid+1;
      }else{
        fin = mid-1;
      }
    }
    cout<<cont<<endl;
}