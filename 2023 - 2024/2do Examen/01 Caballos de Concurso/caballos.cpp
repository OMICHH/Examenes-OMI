#include <iostream>
#include <algorithm>
using namespace std;

int n, presupuesto, calidad;
double calidadAcumulada, calidadMax;

struct Caballo {
  int precio;
  double calidad;
};

Caballo caballos[100001];

bool compararPorCalidad(const Caballo& a, const Caballo& b) {
  return a.calidad > b.calidad;
}

int main(){

  cin >> n >> presupuesto;

  for (int i = 0; i < n; i++){
    cin >> caballos[i].precio;
    
    for (int j = 0; j < 5; j++){
      cin >> calidad;
      caballos[i].calidad += calidad;
    }

    caballos[i].calidad /= 5;
  }

  sort(caballos, caballos + n, compararPorCalidad);

  for(int i = 0; i < n; i++){
    if(caballos[i].precio == presupuesto && calidadAcumulada == 0){
      calidadMax = caballos[i].calidad;

    }else if(presupuesto >= caballos[i].precio){
      presupuesto -= caballos[i].precio;
      calidadAcumulada += caballos[i].calidad;
    }

    if(presupuesto  == 0){
      break;
    }
  }

  if(calidadMax == 0 && calidadAcumulada == 0){
    cout << "-1" << endl;
  }else if(calidadMax < calidadAcumulada){
    cout << calidadAcumulada << endl;
  }else{
    cout << calidadMax << endl;
  }


  return 0;
}
