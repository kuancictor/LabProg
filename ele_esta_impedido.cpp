#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, d;
    cin >> a >> d;
    while(a > 0 && d > 0){
        vector<int> atacantes(a), defensores(d);
        for(int i = 0; i < a; i++){
            cin >> atacantes[i];
        }
        for(int i = 0; i < d; i++){
            cin >> defensores[i];
        }
        sort(defensores.begin(), defensores.end());
        int penultimo = defensores[1];
        int atacante_mais_proximo = *min_element(atacantes.begin(), atacantes.end());

        if(atacante_mais_proximo < penultimo){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
        cin >> a >> d;
    }
    return 0;
}