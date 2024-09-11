#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 2500;
bool visitado[MAX][MAX];

int n, m, cantidad = 0, presupuesto;
int matriz[MAX][MAX];
int rectangulos[MAX];

int dx[] = {1, -1, 0, 0}; 
int dy[] = {0, 0, 1, -1};

int dfs(int matriz[][MAX], int n, int m, int x, int y) {
    visitado[x][y] = true;
    int suma = matriz[x][y];

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < n && ny < m && matriz[nx][ny] != 0 && !visitado[nx][ny]) {
            suma += dfs(matriz, n, m, nx, ny);
        }
    }

    return suma;
}

int main() {

  cin >> n >> m;
  cin >> presupuesto;

  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++) {
      cin >> matriz[i][j];
    }
  }


  for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] != 0 && !visitado[i][j]) {
                rectangulos[cantidad++] = dfs(matriz, n, m, i, j);
            }
        }
    }



  sort(rectangulos, rectangulos + cantidad);
  int suma = 0, contador = 0;

  for (int i = 0; i < cantidad; i++) {
    if (suma + rectangulos[i] <= presupuesto) {
        suma += rectangulos[i];
        contador++;
    } else {
        break;
    }
  }

  cout << contador << endl;

  return 0;
}