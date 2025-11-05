#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool jolly = true;
        vector<int> seq(n);
        vector<int> historico;
        for(int i = 0; i < n; i++){
            cin >> seq[i];
        }
        
        for(int i = 1; i < n; i++){
            historico.push_back(i);
        }

        for(int i = 0; i < n-1; i++){
            int numabs = abs(seq[i] - seq[i+1]);
            if(numabs < 1 || numabs >= n){
                jolly = false;
                break;  
            }
            auto it = find(historico.begin(), historico.end(), numabs);
            if(it == historico.end()){
                jolly = false;
                break;
            }
            historico.erase(it);
        }
        if(jolly){
            cout << "Jolly" << endl;
        }
        else{
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
