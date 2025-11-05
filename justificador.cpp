#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    bool primeiro = true;
    cin >> n;
    while(n > 0){
        vector<string> v(n);
        int maior = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            int lain = v[i].length();
            maior = max(maior, lain);
        }

        if(!primeiro){
            cout << endl;
        }
        primeiro = false;

        for(int i = 0; i < n; i++){
            int lain = v[i].length();
            int espaco = maior - lain;
            for(int j = 0; j < espaco; j++){
                cout << ' ';
            }
            cout << v[i] << endl;
        }
        cin >> n;
    }
    
    return 0;
}