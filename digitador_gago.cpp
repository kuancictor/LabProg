#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string texto;
    getline(cin, texto);
    stringstream ss(texto);
    string palavra;
    bool first = true;

    while(ss >> palavra){
        int tam = palavra.size();
        if(tam >= 4){
            string str1 = palavra.substr(0, 2);
            string str2 = palavra.substr(2, 2);
            if(str1 == str2){
                palavra.erase(0,2);
            }
        }
        if(!first){
            cout << " ";
        }
        cout << palavra;
        first = false;
    }
    cout << endl;
    return 0;
}