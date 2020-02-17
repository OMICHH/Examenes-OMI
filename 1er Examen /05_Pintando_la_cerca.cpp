#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d, min = 101, max = 0 ;
    cin>>a>>b>>c>>d;

    if(b<c or d<a){
        cout<<(b-a)+(d-c);
    }else{
        if(a<c){
            min = a;
        }else{
            min = c;
        }

        if(b>d){
            max = b;
        }else{
            max = d;
        }
        cout<<max - min;
    }
}