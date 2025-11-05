#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x, resp = 0;
        cin >> x;
        if(x%2050 == 0){
            ll aux = x/2050;
            string s = to_string(aux);
            for(char c : s){
                resp += c - '0';
            }
            cout << resp << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }
    return 0;
}