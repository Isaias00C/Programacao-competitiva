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

    int acertos_enzo = 0, acertos_lobo = 0;
    for(int i = 0; gab[i] != '\0'; i++){
        if(gab[i] != '?'){    
            if(enzo[i] == gab[i] || enzo[i] == '?') acertos_enzo++;
            if(lobo[i] == gab[i] || lobo[i] == '?') acertos_lobo++;
        }else {
            if(enzo[i] == lobo[i]){

            }else{

            }
        }
    }

    if(acertos_enzo > acertos_lobo) cout << "Enzo";
    else if(acertos_lobo > acertos_enzo) cout << "Lobo";
}