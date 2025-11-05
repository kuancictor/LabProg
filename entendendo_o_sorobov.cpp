#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v = {
        "10-01111", //0
        "10-10111", //1
        "10-11011", //2
        "10-11101", //3
        "10-11110", //4
        "01-01111", //5
        "01-10111", //6
        "01-11011", //7
        "01-11101", //8
        "01-11110", //9
    };

    string num;
    while(cin >> num){
        vector<string> linhas(8,"");
        int zeros = 9 - num.size();

        for(int i = 0; i < zeros; i++){
            string aux = v[0];
            for(int j = 0; j < 8; j++){
                linhas[j] += aux[j];
            }
        }

        for(char c : num){
            int n = c - '0';
            string aux = v[n];
            for(int j = 0; j < 8; j++){
                linhas[j] += aux[j];
            }
        }
        for(string s : linhas){
            cout << s << "\n";
        }
        cout << endl;
    }
    
    return 0;
}