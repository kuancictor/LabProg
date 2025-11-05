#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    string frase, one, zero;
    vector<int> ja_foi_one(3), ja_foi_zero(4);
    cin >> frase;
    for(int i = 0; i < n; i++){
        char c = frase[i];
        if(c == 'o'){
            ja_foi_one[0]++;
            ja_foi_zero[3]++;
        }
        if(c == 'n'){
            ja_foi_one[1]++;
        }
        if(c == 'e'){
            ja_foi_one[2]++;
            ja_foi_zero[1]++;
        }
        if(c == 'z'){
            ja_foi_zero[0]++;
        }
        if(c == 'r'){
            ja_foi_zero[2]++;
        }

        if(ja_foi_one[0] > 0 && ja_foi_one[1] > 0 && ja_foi_one[2] > 0){
            ja_foi_one[0]--;
            ja_foi_one[1]--;
            ja_foi_one[2]--;
            cout << "1 ";
        }
        if(ja_foi_zero[0] > 0 && ja_foi_zero[1] > 0 && ja_foi_zero[2] > 0 && ja_foi_zero[3] > 0){
            ja_foi_zero[0]--;
            ja_foi_zero[1]--;
            ja_foi_zero[2]--;
            ja_foi_zero[3]--;
            cout << "0 ";
        }
    }
    cout << endl;
    return 0;
}