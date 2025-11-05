#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct{
    string normal;
    string lower;
} nomes;

bool compare(nomes a, nomes b){
    return a.lower < b.lower;
}

int main(){
    string n;
    vector<nomes> v;
    while(getline(cin, n)){
        if(n.empty()){
            continue;
        }
        string aux;
        for(int i = 0; i < (int)n.size(); i++){
            aux += tolower((unsigned char)n[i]);
        }
        v.push_back({n, aux});
    }
    sort(v.begin(), v.end(), compare);

    cout << v.back().normal << endl;
    
    return 0;
}