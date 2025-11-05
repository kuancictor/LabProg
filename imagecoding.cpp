#include <bits/stdc++.h>
using namespace std;

int main(){
    int rep;
    cin >> rep;
    for(int v = 1; v <= rep; v++){
        int m, n, count = INT_MIN, bit_maior, bit_menor;
        cin >> m >> n >> bit_maior >> bit_menor;

        char matriz[m][n];
        char alfa[27];
        int cont_alfa[27] = {0};  // Inicializa com zero

        // alfabeto
        for(int i = 0; i < 26; i++){
            alfa[i] = 'A' + i;
        }

        // ler matriz
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cin >> matriz[i][j];
            }  
        }

        // conta quantas vezes cada letra aparece
        for(int i = 0; i < 26; i++){
            for(int j = 0; j < m; j++){
                for(int k = 0; k < n; k++){
                    if(matriz[j][k] == alfa[i]){
                        cont_alfa[i]++;
                    }
                }
            }
        }

        // encontra a maior frequência
        for(int j = 0; j < 26; j++){
            if(cont_alfa[j] > count){
                count = cont_alfa[j];
            }
        }

        int aux = 0;
        for(int j = 0; j < 26; j++){
            if(cont_alfa[j] == count){
                aux++;
            }
        }

        count *= aux; // total de pixels importantes

        // Usar bit_menor corretamente
        printf("Case %d: %d\n", v, (count * bit_maior) + (((m * n) - count) * bit_menor));
    }
    
    return 0;
}
