#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct {
    string nome;
    int p;
    int k;
    int m;
} godofor;

bool compare(godofor &a, godofor &b){
    if(a.p != b.p) return a.p > b.p;
    if(a.k != b.k) return a.k > b.k;
    if(a.m != b.m) return a.m < b.m; 

    return a.nome < b.nome;
}

int main(){
    int n;
    cin >> n;
    vector<godofor> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].nome >> v[i].p >> v[i].k >> v[i].m;
    }
    sort(v.begin(), v.end(), compare);
    /*for(auto it : v){
        cout << it.nome << endl;
    }*/
    cout << v[0].nome << endl;
    
    return 0;
}