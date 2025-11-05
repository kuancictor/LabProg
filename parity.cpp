#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n != 0){
        string bin = "";
        int count = 0;
        while(n > 0) {
            bin = char((n % 2) + '0') + bin;
            if(n % 2 == 1){
                count++;
            }
            n /= 2;
        }
        cout << "The parity of " << bin << " is " << count << " (mod 2)." << endl;
        cin >> n;
    }
    
    return 0;
}