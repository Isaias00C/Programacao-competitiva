//https://atcoder.jp/contests/abc391/tasks/abc391_b

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    vector<vector<char>> S (N, vector<char> (N)), T (M, vector<char> (M));

    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            cin >> S[i][j];
        }
    }

    for (int i = 0; i < M; ++i){
        for (int j = 0; j < M; ++j){
            cin >> T[i][j];
        }
    }

    int a, b;
    
    for (a = 0; a < N - M + 1; ++a){
        for (b = 0; b < N - M + 1; ++b){
            int isEqual = 1;

            for (int i = a; i < M; ++i){
                for (int j = b; j < M; ++j){
                    if (S[i][j] != T[i-a][j-b]) isEqual = 0;
                }
            }

            if (isEqual) {
                cout << a+1 << " " << b+1;
                return 0;
            }
        }
    }

    return 0;
}