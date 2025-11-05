#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fractal(int i, int j, int tam, int n, int k, vector<vector<char>> &m, vector<vector<char>> &s){
    if(k == 0){
        return;
    }

    int subtam = tam/n;
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            if(m[a][b] == '*'){
                for(int y = i + a*subtam; y < i + (a+1)*subtam; y++){
                    for(int x = j + b*subtam; x < j + (b+1)*subtam; x++){
                        s[y][x] = '*';
                    }
                }
            }
            else if(k > 1){
                fractal(i + a*subtam, j + b*subtam, subtam, n, k-1, m, s);
            }
        }
    }
    
    return;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, tam;
    cin >> n >> k;
    tam = pow(n, k);
    vector<vector<char>> m(n, vector<char>(n));
    vector<vector<char>> s(tam, vector<char>(tam, '.'));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin >> c;
            m[i][j] = c;
        }
    }
    fractal(0, 0, tam, n, k, m, s);
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            cout << s[i][j];
        }
        cout << endl;
    }
    
    return 0;
}