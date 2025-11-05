#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n, maior, aux, i = 0;
    cin >> t;
    while(t--){
        maior = INT_MIN;
        i++;
        cin >> n;
        while(n--){
            cin >> aux;
            if(aux > maior){
                maior = aux;
            }
        }
        printf("Case %d: %d\n", i, maior);
    }
    return 0;
}