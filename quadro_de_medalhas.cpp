#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct{
    string pais;
    int ouro;
    int prata;
    int bronze;
} paisesMedalhas;

bool comparar(const paisesMedalhas &a, const paisesMedalhas &b){
    if(a.ouro != b.ouro){
        return a.ouro > b.ouro;
    }
    if(a.prata != b.prata){
        return a.prata > b.prata;
    }
    if(a.bronze != b.bronze){
        return a.bronze > b.bronze;
    }
    return a.pais < b.pais;
}

int main(){
    int n;
    cin >> n;
    vector<paisesMedalhas> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].pais >> v[i].ouro >> v[i].prata >> v[i].bronze;
    }
    sort(v.begin(), v.end(), comparar);
    for(auto &it : v){
        cout << it.pais << " " << it.ouro << " " << it.prata << " " << it.bronze << endl;
    }
    return 0;
}