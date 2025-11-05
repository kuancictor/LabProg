#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int piramide[10][10];
	cin >> t;
	while(t--){
		for(int i = 0; i < 9; i += 2){
			for(int j = 0; j <= i; j += 2)
				cin >> piramide[i][j];
		}
		for(int i = 8; i > 0; i -= 2){
			for(int j = 0; j < i;  j += 2){
				piramide[i][j + 1] = (piramide[i - 2][j] - piramide[i][j] - piramide[i][j + 2])/2;  
				piramide[i - 1][j] = piramide[i][j] + piramide[i][j + 1];
				piramide[i - 1][j + 1] = piramide[i][j + 1] + piramide[i][j + 2];
			}
		}
		for(int i = 0; i < 9; ++i){
			for(int j = 0; j <= i; ++j){
				cout << piramide[i][j];
				if(j < i){
                    cout << " ";
                }
			}
			cout << endl;
		}
	}
	return 0;
}