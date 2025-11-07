#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string alfa, salfa;
        cin >> n;
        cin >> alfa;
        salfa = alfa;
        sort(salfa.begin(), salfa.end());
        int count = 0;
        bool chance = true;
        for(int i = 0; i < n; i++){
            if(alfa[i]!=salfa[i]){
                count++;
                if(count > 2){
                    chance = false;
                    break;
                }
            }
        }
        if(chance){
            cout << "There are the chance." << endl;
        }
        else{
        cout << "There aren't the chance." << endl;
        }
    }
    
}