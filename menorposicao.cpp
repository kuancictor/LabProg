#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, aux = INT_MAX, indexmenor;
    cin >> n;
    vector<int> x(n);
    for(int i = 0; i < x.size(); i++){
        cin >> x[i];
    } 
    for(int i = 0; i < x.size(); i++){
        if(aux > x[i]){
            aux = x[i];
            indexmenor = i;
        }
    } 
    cout << "Menor valor: " << aux << endl << "Posicao: "<< indexmenor << endl;

    
    return 0;
}