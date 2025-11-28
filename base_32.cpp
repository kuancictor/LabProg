#include <bits/stdc++.h>
using namespace std;
#define ll long long

void base32(unsigned long long n){
    if(n < 32){
        int aux = n;
        if(aux < 10){
            cout << aux;
        }
        else{
            cout << (char)('A' + (aux - 10));
        }
        return;
    }
    base32(n/32);
    int aux = n%32;
    if(aux < 10){
        cout << aux;
    }
    else{
        cout << (char)('A' + (aux - 10));
    }
    return;
}

int main(){
    unsigned long long n;
    while(cin >> n){
        if(n == 0){
            cout << 0 << "\n";
            break;
        }
        base32(n);
        cout << "\n";
    }
    return 0;
}