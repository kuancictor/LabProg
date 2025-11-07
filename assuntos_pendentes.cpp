#include <bits/stdc++.h>
using namespace std;

int main(){
    long long abertos = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            abertos++;
        }
        else{
            if(abertos > 0){
                abertos--;
            }
        }
    }
    if(abertos == 0){
        cout << "Partiu RU!" << endl;
    }
    else{
        cout << "Ainda temos " << abertos << " assunto(s) pendente(s)!" << endl;
    }
    
    return 0;
}