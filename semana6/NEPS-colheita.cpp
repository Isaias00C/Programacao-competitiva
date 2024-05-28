#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhas, colunas;
    cin >> linhas >> colunas;
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> matriz[linhas][colunas];
        }
    }
    int maior_valor = 0;
    for(int i = 0, j = 0; i < colunas - 1 && j < linhas - 1; i++){
        //teste a direita
        int aux1 = matriz[0][colunas + 1] - matriz[0][colunas];
        if(aux1 > maior_valor){
            maior_valor = aux1;
        }
        //teste a abaixo
        int aux2 = matriz[1][colunas] - matriz[0][colunas];
        if(aux2 > maior_valor){
            maior_valor = aux2;
        }
        if(i+1 == colunas){
            i = 0;
            j++;
        }
    }
    cout << maior_valor;
}