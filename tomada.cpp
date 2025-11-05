//#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t, e, soma = 0;

    cin >> n;

    while(n--){
        cin >> t;
        for(int i = 0; i < t; i++){
            cin >> e;
            soma += e;
        }
        cout << (soma-(t-1)) << "\n";
        soma = 0;
    }
    return 0;
}