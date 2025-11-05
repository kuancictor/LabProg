#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string mustard;
    cin >> mustard;
    vector<int> v;
    for(auto it : mustard){
        if(isdigit(it)){
            int aux = it - '0';
            v.push_back(aux);
        }
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
        if(i < v.size()-1){
            cout << '+';
        }
    }
    cout << endl;
    
    return 0;
}