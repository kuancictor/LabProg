#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ones = 0, zeros = 0;
    for(char c : s){
        if(c == 'n') ones++;
        if(c == 'z') zeros++;
    }

    for(int i = 0; i < ones; i++) cout << "1 ";
    for(int i = 0; i < zeros; i++) cout << "0 ";
    cout << "\n";

    return 0;
}
