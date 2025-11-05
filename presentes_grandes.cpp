#include <bits/stdc++.h>
using namespace std;
#define ll long long

typedef struct{
    int id;
    int altura, largura, comprimento;
    int volume;
} Presente;

bool compare(const Presente &a, const Presente &b){
    if(a.volume != b.volume){
        return a.volume > b.volume;
    }
    return a.id < b.id; 
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<Presente> v(n);
        vector<int> aux;
        for(int i = 0; i < n; i++){
            cin >> v[i].id >> v[i].altura >> v[i].largura >> v[i].comprimento;
            v[i].volume = v[i].altura * v[i].largura * v[i].comprimento;
        }
        sort(v.begin(), v.end(), compare);
        for(int i = 0; i < k; i++){
            aux.push_back(v[i].id);
        }
        sort(aux.begin(), aux.end());
        for(int i = 0; i < k; i++){
            cout << aux[i];
            if(i < k-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}