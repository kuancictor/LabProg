#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    while(n--){
        string valor;
        cin >> valor;
        if(valor.size() == 2){
            cout << valor.back() << endl;
            continue;
        }
        char mn = '9';
        for(char it : valor){
            if(it < mn){
                mn = it;
            }
        }
        cout << mn << endl;
    }
    return 0;
}