#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool eh_primo(ll x){
    if(x < 2) return false;
    for(ll i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        x += 1;
        if(x % 7 == 0 && x % 2 != 0 && eh_primo(x+2)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}