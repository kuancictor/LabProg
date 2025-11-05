#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    bool ja_p = false;
    string frase, saida;
    getline(cin, frase);

    for(int i = 0; i < frase.length(); i++){
        if(!ja_p && frase[i] == 'p'){
            ja_p = true;
        }
        else{
            saida += frase[i];
            ja_p = false;
        }
    }
    cout << saida << endl;
    return 0;
}