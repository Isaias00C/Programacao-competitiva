//https://neps.academy/br/exercise/306

#include <bits/stdc++.h>
using namespace std;

int main(){
    int qtd_salas;

    cin >> qtd_salas;

    vector<int> salas (qtd_salas);

    for(int i = 0; i < qtd_salas; ++i){
        cin >> salas[i];
    }

    int resp = salas[0];
    int S = salas[0];

    for (int i = 1; i < qtd_salas; ++i){
        if (S < 0) S = 0;

        S += salas[i];

        if (S > resp) resp = S;
    }

    cout << resp << "\n";

    return 0;
}