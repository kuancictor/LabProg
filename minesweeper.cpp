#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int coluna, linha, casos = 0;
    cin >> linha >> coluna;
    while(coluna != 0 || linha != 0){
        vector<string> matriz(linha);
        for(int i = 0; i < linha; i++){
            cin >> matriz[i];
        }

        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                int bombas = 0;
                if(matriz[i][j] != '*'){
                    if(j - 1 >= 0 && matriz[i][j - 1] == '*'){
                        bombas++;
                    }
                    if(j - 1 >= 0 && i - 1 >= 0 && matriz[i-1][j-1] == '*'){
                        bombas++;
                    }
                    if(i - 1 >= 0 && matriz[i - 1][j] == '*'){
                        bombas++;
                    }
                    if(j + 1 < coluna && i - 1 >= 0 && matriz[i - 1][j + 1] == '*'){
                        bombas++;
                    }
                    if(j + 1 < coluna && matriz[i][j + 1] == '*'){
                        bombas++;
                    }
                    if(j + 1 < coluna && i + 1 < linha && matriz[i + 1][j + 1] == '*'){
                        bombas++;
                    }
                    if(i + 1 < linha && matriz[i + 1][j] == '*'){
                        bombas++;
                    }
                    if(j - 1 >= 0 && i + 1 < linha && matriz[i + 1][j - 1] == '*'){
                        bombas++;
                    }
                    matriz[i][j] = '0' + bombas;
                }
            }
        }
        casos++;
        cout << "Field #" << casos << ":" << endl;
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cin >> linha >> coluna;
        if(coluna != 0 || linha != 0){
            cout << "\n";
        }
    }
    return 0;
}