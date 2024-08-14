//https://neps.academy/br/competition/2006/exercise/2731

#include <bits/stdc++.h>
using namespace std;

void f();

int main(){
    f();
}

void f(){
    int q;
    cin >> q;

    string enzo, lobo, gab;

    cin >> enzo >> lobo >> gab;

    int acertos_enzo = 0, acertos_lobo = 0, margem_de_erro = 0;
    for(int i = 0; gab[i] != '\0'; i++){
        if(gab[i] != '?'){    
            if(enzo[i] == gab[i] || enzo[i] == '?') acertos_enzo++;
            if(lobo[i] == gab[i] || lobo[i] == '?') acertos_lobo++;
        }else {
            if(enzo[i] != lobo[i]){
                margem_de_erro++;
            }
        }
    }

    cout << "Acertos do Enzo: " << acertos_enzo << "\n";
    cout << "Acertos do Lobo: " << acertos_lobo << "\n";
    cout << "Margem de Erro: " << margem_de_erro << "\n";

    if(max(acertos_enzo, acertos_lobo) - min(acertos_enzo, acertos_lobo) > margem_de_erro){
        if(acertos_enzo > acertos_lobo) cout << "Enzo";
        else cout << "Lobo";
    }else {
        
        cout << "Indefinido";
    }
}

