#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<string> historico;
        int n, x = 0;
        cin >> n;
        cin.ignore();
        for(int i = 0; i < n; i++){
            string cmd;
            getline(cin, cmd);

            if(cmd == "LEFT"){
                historico.push_back("LEFT");
                x--;
            }
            else if(cmd == "RIGHT"){
                historico.push_back("RIGHT");
                x++;
            }
            else{ 
                string numS; 
                for(int j = 0; j < cmd.length(); j++){
                    if(isdigit(cmd[j])){
                        numS += cmd[j];
                    }
                }
                //cout << numS << endl;
                int num = stoi(numS);
                if(historico[num-1] == "LEFT"){
                    historico.push_back("LEFT");
                    x--;
                }
                else if(historico[num-1] == "RIGHT"){
                    historico.push_back("RIGHT");
                    x++;
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}