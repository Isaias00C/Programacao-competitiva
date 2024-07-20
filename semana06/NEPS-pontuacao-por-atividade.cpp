#include <bits/stdc++.h>
using namespace std;

int main(){
    int E, A, C;
    cin >> E >> A >> C;
    int soma = 2*E + 3*A + 5*C;

    if(soma >= 200){
        cout << "O";
    }else if(soma >= 150){
        cout << "S";
    }else if(soma >= 100){
        cout << "B";
    }else{
        cout << "N";
    }
}