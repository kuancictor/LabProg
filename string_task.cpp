#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string text, resp;
    cin >> text;
    for(int i = 0; i < text.size(); i++){
        char aux = tolower(text[i]);
        if(aux != 'a' && aux != 'e' && aux != 'i' && aux != 'o' && aux != 'u' && aux != 'y'){
            //resp += aux;
            cout << "." << aux;
        }
    }

    return 0;
}