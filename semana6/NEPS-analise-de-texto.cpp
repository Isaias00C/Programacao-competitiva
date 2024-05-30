#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase, controle;
    getline(cin, frase);
    cin >> controle;
    int contador_de_palavras = 0;

    for(int i = 0; i < frase.size(); i++){
        for(int j = 0; j < controle.size(); j++){
            if(frase[i] == controle[j]){
                contador_de_palavras++;
                while(i < frase.size()){
                    if(frase[i] == ' ') break;
                    i++;
                }
                break;
            }
        }
    }

    cout << contador_de_palavras;
}