#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dfs(ll i, ll j, vector<vector<int>> &m, vector<vector<bool>> &v, int cor){
    if(i < 0 || i >= m.size() || j < 0 || j >= m[0].size()){
        return 0;
    }
    if(v[i][j]){
        return 0;
    }
    if(m[i][j] != cor){
        return 0;
    }

    v[i][j] = true;
    int tamanho = 1;

    tamanho += dfs(i+1, j, m, v, cor);
    tamanho += dfs(i-1, j, m, v, cor);
    tamanho += dfs(i, j+1, m, v, cor);
    tamanho += dfs(i, j-1, m, v, cor);

    return tamanho;

}

int main(){
    int y, x;
    cin >> y >> x;
    vector<vector<int>> m(y, vector<int>(x));
    vector<vector<bool>> v(y, vector<bool>(x, false));
    int menor_cor = INT_MAX;

    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            cin >> m[i][j];
        }
    }

    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            if(!v[i][j]){
                int buceta = dfs(i, j, m, v, m[i][j]);
                menor_cor = min(menor_cor, buceta);
            }
        }
    }

    cout << menor_cor << endl;
    
    return 0;
}