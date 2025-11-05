#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(const pair<int, int> &a, const pair<int, int> &b){
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v[i] = {x, i+1};
    }
    sort(v.begin(), v.end(), compare);

    int i = 0;
    while(i < n){
        int j = i;
        while(j < n && v[j].first == v[i].first){
            j++;
        }
        reverse(v.begin()+i, v.begin()+j);
        i = j;
    }

    for(int i = 0; i < n; i++){
        cout << v[i].second;
        if(i < n - 1){
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}