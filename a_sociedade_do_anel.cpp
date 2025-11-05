#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    unordered_map<string, int> m = {
        {"X", 0},
        {"H", 0},
        {"E", 0},
        {"A", 0},
        {"M", 0}
    };
    string lixo, valor;
    for(int i = 0; i < n; i++){
        cin >> lixo >> valor;
        m[valor]++;
    }

    cout << m["X"] << " Hobbit(s)" << endl;
    cout << m["H"] << " Humano(s)" << endl;
    cout << m["E"] << " Elfo(s)" << endl;
    cout << m["A"] << " Anao(oes)" << endl;
    cout << m["M"] << " Mago(s)" << endl;

    return 0;
}