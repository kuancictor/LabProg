#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct{
    string cor, nome;
    char tam;
} CAMISAS;

bool compare(CAMISAS &a, CAMISAS &b){
    if(b.cor != a.cor){
        return a.cor < b.cor;
    }
    if(b.tam != a.tam){
        return a.tam > b.tam;
    }

    return a.nome < b.nome;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();

    while(n > 0){
        vector<CAMISAS> v(n);
        for(size_t i = 0; i < n; i++){
            getline(cin, v[i].nome);
            cin >> v[i].cor >> v[i].tam;
            cin.ignore();
        }
        sort(v.begin(), v.end(), compare);
        for(auto it : v){
            cout << it.cor << " " << it.tam << " " << it.nome << endl; 
        }

        cin >> n;
        cin.ignore();
        if(n != 0){
            cout << endl;
        }
    }
    
    return 0;
}