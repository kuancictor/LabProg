#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int bonus, Dabriel, Guarte;
        cin >> bonus;
        for(int i = 0; i < 2; i++){
            int atq, def, lv, valor_golpe = 0;
            cin >> atq >> def >> lv;
            valor_golpe = (atq + def)/2;
            if(lv % 2 == 0){
                valor_golpe += bonus;
            }

            if(i == 0){
                Dabriel = valor_golpe;
            }
            else{
                Guarte = valor_golpe;
            }
        }
        if(Dabriel > Guarte){
            cout << "Dabriel" << endl;
        }
        else if(Guarte > Dabriel){
            cout << "Guarte" << endl;
        }
        else{
            cout << "Empate" << endl;
        }
    }
    
    return 0;
}