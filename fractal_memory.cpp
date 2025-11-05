#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k;
vector<vector<char>> m;
vector<vector<char>> s;

void fractal(int i, int j, int tam, int passo) {
    if(passo == 0){
        return;
    }

    int aux = tam / n;

    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            if(m[a][b] == '*'){
                for(int y = i + a*aux; y < i + (a+1)*aux; y++){
                    for(int x = j + b*aux; x < j + (b+1)*aux; x++){
                        s[y][x] = '*';
                    }
                }
            }
            else{
                fractal(i + a*aux, j + b*aux, aux, passo - 1);
            }
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin >> n >> k;
    m.assign(n, vector<char>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> m[i][j];
        }
    }

    int tam = pow(n, k);
    s.assign(tam, vector<char>(tam, '.'));

    fractal(0, 0, tam, k);

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            cout << s[i][j];
        }
        cout << endl;
    }

    return 0;
}
