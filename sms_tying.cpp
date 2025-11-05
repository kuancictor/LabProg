#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz", " "};
    char lixo;
    int n;
    scanf("%d%c", &n, &lixo);
    //cin.ignore();
    for(int casos = 1; casos <= n; casos++){
        string frase;
        getline(cin, frase);
        int toques = 0;
        for(int letras = 0; letras < frase.length(); letras++){
            char c = frase[letras];
            for(int i = 0; i < v.size(); i++){
                if(v[i].find(c) != string::npos){
                    toques += (v[i].find(c)) + 1;
                    //cout << v[i] << " " << (v[i].find(c)) + 1 << endl;
                    break;
                }
            }
        }
        cout << "Case #"<< casos << ": " << toques << endl;
    }
    return 0;
}