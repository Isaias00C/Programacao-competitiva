#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int H, W;
    cin >> H >> W;

    vector<int> v(H, 0);
    vector<string> u;

    for (int i = 0; i < H; ++i){
        string s;
        cin >> s;
        u.push_back(s);

        for (int j = 0; j < W; ++j){
            if (s[j] == '#' || s[j] == '?'){
                ++v[i];
            }
        }
    }

    int aux = 0;
    for (int i = min_row; i <= max_row; ++i){
        aux += v[i][W];
    }

    if (aux == (max_row - min_row + 1)*(max_col - min_col + 1)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}