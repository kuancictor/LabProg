#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase, maior_p;
    int maior = 0;
    getline(cin, frase);
    while(frase != "0"){
        string palavra;
        vector<int> v;
        stringstream ss(frase);
        while(ss >> palavra){
            int aux = palavra.size();
            v.push_back(aux);
            if(aux >= maior){
                maior = aux;
                maior_p = palavra;
            }
        }
        for(size_t i = 0; i < v.size(); i++){
            cout << v[i];
            if(i+1 < v.size()){
                cout << "-";
            }
        }
        cout << endl;

        getline(cin, frase);
    }
    cout << endl;
    cout << "The biggest word: " << maior_p << endl;
    return 0;
}