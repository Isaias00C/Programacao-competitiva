#include <bits/stdc++.h>
using namespace std;

string solve(string& S){
    int N = S.size();
    
    //build T
    string T (N, '?');

    for(int i = 0; i < N; ++i){
        if(S[i] == 'o') T[i] = 'o';
        if(S[i] == '.') T[i] = '.';
    }

    

}

int main(){
    int N, K;
    string S;

    cin >> N >> K;
    cin >> S;

    for(char c : S){
        
    }
}
