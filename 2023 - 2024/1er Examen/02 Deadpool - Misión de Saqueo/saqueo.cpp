#include <iostream>

using namespace std;

int arr[1000001];
int n, k, suma, sumamax;

int main()
{
    cin>>n>>k;

    for(int i = 0; i < n; i++){
        cin>>arr[i];

        if(i < k){
            suma += arr[i];
        }
    }
    
    sumamax = suma;

    for(int i = 1; i < n - k; i++){
        suma -= arr[i - 1];

        suma += arr[i + k - 1];

        if(sumamax < suma){
            sumamax = suma;
        }
    }

    cout<<sumamax<<endl;

    return 0;
}