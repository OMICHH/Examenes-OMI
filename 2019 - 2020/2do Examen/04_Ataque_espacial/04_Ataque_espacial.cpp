#include <iostream>
using namespace std;
int space[1001][1001];
int m,n,k,x,y,proto;
int main(){
  cin>>m>>n;
  for(int i = 1 ; i <= m ; i++){
    for(int j = 1 ; j <= n ; j++){
      cin>>space[i][j];
    }
  }
  cin>>k;
  for(int i = 0; i < k ; i++){
    cin>>x>>y;
    proto += space[x-1][y-1]+space[x-1][y]+space[x-1][y+1]+
             space[x][y-1]+  space[x][y]+  space[x][y+1]+
             space[x+1][y-1]+space[x+1][y]+space[x+1][y+1];
  }
  cout<<proto;
}