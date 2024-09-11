#include <iostream>
using namespace std;

long long arr[1000001];
long long n, q, start, mid, final;

int main()
{

    cin>>n>>q;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    start = 0;
    final = n -1;

    while(start <= final){
        mid = (start + final)/2;

        if(arr[mid] == q){
            cout<<mid;
            break;
            
        }else if(arr[mid] > q){
            final = mid - 1;
            
        }else{
            start = mid + 1;   
        }
    }
    
    if(start > final){
        cout<<"-1";
    }

    return 0;
}