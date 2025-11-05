#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int N;
    double Ld, Qd;
    cin >> N >> Ld >> Qd;

    vector<string> nomes(N);
    for(int i = 0; i < N; ++i){
        cin >> nomes[i];
    }

    ll Li = llround(Ld * 10.0);
    ll Qi = llround(Qd * 10.0);

    ll cuias = (Li + Qi - 1) / Qi;
    ll ultimo_chimas = (cuias - 1) % N;
    ll qtd_chimas = Li - Qi * (cuias - 1);

    cout << nomes[ultimo_chimas] << " " << fixed << setprecision(1) << (qtd_chimas / 10.0) << endl;
    return 0;
}
