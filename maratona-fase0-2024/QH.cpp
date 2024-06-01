#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int N){
    if(N == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(N); i++){
        if(N / (double)i == N / i){
            return false;
        }
    }
    return true;
}

int main(){
    int casos;
    cin >> casos;
    for(int j = 0; j < casos; j++){
        int N;
        cin >> N;
        int x, y;
        if(N % 2 == 0){
            x = N / 2 - 1;
            y = N - x;
        }else{
            x = N / 2;
            y = N - x;
        }
        int aux = 0;
        while(x > 0 || y < N){
            if(!eh_primo(x) && !eh_primo(y)){
                aux = 1;
                break;
            }
            x--;
            y++;
        }
        if(aux){
            cout << x << " " << y << "\n";
        }else{
            cout << -1 << "\n";
        }
    }
}