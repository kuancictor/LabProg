#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        string binario;
        vector<int> valor(n);
        for(int i = 0; i < n; i++){
            cin >> binario;
            valor[i] = stoi(binario, nullptr, 2);
        }
        for(int i = 0; i < n; i++){
            printf("%c", valor[i]);
        }
        cout << endl;
    }
    return 0;
}