#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;

    map<string, vector<int>> infos;

    for(int i = 0; i < N; i++){
        string s1, s2;
        int qtd;
        cin >> s1 >> s2 >> qtd;

        if(infos.find(s1) == infos.end()){
            vector<int> v (3, -1);
        
            if(s2 == "left"){
                v[0] = qtd;
            }else if(s2 == "any"){
                v[1] = qtd;
            }else if(s2 == "right"){
                v[2] = qtd;
            }

            infos[s1] = v;
        }else {
            if(s2 == "left"){
                infos[s1][0] = qtd;
            }else if(s2 == "right"){
                infos[s1][2] = qtd;
            }
        }
    }

    int count = 0, isPossible = 0;

    for(auto i = infos.begin(); i != infos.end(); i++){
        vector<int> v = i->second;

        if(v[1] == -1){
            count += max(v[0], v[2]);
            if(v[0] != -1 && v[2] != -1){
                isPossible = 1;
            }
        }else{
            if(v[0] != -1 || v[2] != -1 || v[1] >= 2) {
                isPossible = 1;
            }
            if(v[0] != -1 || v[2] != -1) count = max(v[0], v[2]);
            else if(v[0] == -1 && v[2] == -1) count++;
        }
    }

    if(isPossible){
        cout << count+1 <<"\n";
    }else cout << "impossible\n";

    
}

int main(){
    solve();

    return 0;
}