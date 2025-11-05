#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int y, b, r;
    cin >> y >> b >> r;
    int max_y = min({y, b-1, r-2});
    int total = 3 * max_y + 3;
    cout << total << endl;
    return 0;
}