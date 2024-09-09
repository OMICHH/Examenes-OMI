#include <iostream>

using namespace std;

int n, balas, enemigos, enemigo;

int main()
{
  cin>>balas>>n;

  for (int i = 0; i < n; i++){
    cin>>enemigo;
    enemigos += enemigo;
  }
  
  if(balas >= enemigos){
    cout<<"si "<<(balas - enemigos);
  }else{
    cout<<"no "<<(enemigos -  balas);
  }

    return 0;
}