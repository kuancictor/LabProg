#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> visto;
    while(n--){
        int x;
        cin >> x;

        if(visto.count(x) == 0){
            visto.insert({x, 1});
        }
        else{
            visto[x]++;
        }
    }
    for(auto it : visto){
        cout << it.first << " aparece " << it.second << " vez(es)" << endl; 
    }
    return 0;
}