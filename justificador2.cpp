#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    bool primeiro = true;
    cin >> n;
    while(n > 0){
        vector<string> v(n);
        int maior = 0;
        for(int i = 0; i < n; i++){
            string b, palavra;
            //getline(cin, b);
            getline(cin >> ws, b);
            stringstream ss(b);
            v[i] = "";
            bool pri_ = true;
            while(ss >> palavra){
                if(pri_){
                    v[i] += palavra;
                    pri_ = false;
                }
                else{
                    v[i] += ' ' + palavra;
                }
            }
            
            int lain = v[i].length();
            maior = max(maior, lain);
        }

        if(!primeiro){
            cout << endl;
        }
        primeiro = false;

        for(int i = 0; i < n; i++){
            int lain = v[i].length();
            int espaco = maior - lain;
            for(int j = 0; j < espaco; j++){
                cout << ' ';
            }
            cout << v[i] << endl;
        }
        cin >> n;
    }
    
    return 0;
}