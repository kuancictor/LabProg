#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n, g;
    cin >> n >> g;
    unordered_map<char, int> m;
    for(int i = 0; i < n; i++){
        char runa;
        int valor;
        cin >> runa >> valor;
        m[runa] = valor;
    }
    int x, sum = 0;
    cin >> x;
    while(x--){
        char aux;
        cin >> aux;
        sum += m[aux];
    }
    if(sum >= g){
        cout << sum << endl;
        cout << "You shall pass!" << endl;
    }
    else{
        cout << sum << endl;
        cout << "My precioooous" << endl;
    }
    return 0;
}