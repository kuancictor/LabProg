#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, sc = 0, nc = 0;
    cin >> n;
    vector<string> v;
    while(n--){
        char c; 
        string aux;
        cin >> c >> aux;
        if(c == '+'){
            sc++;
        }
        else{
            nc++;
        }
        v.push_back(aux);
    }
    sort(v.begin(), v.end());
    for(auto &p : v){
        cout << p << endl;
    }
    cout << "Se comportaram: " << sc << " | Nao se comportaram: " << nc << endl;
    return 0;
}