#include <bits/stdc++.h>
using namespace std;

int main(){
    int linhas, colunas;
    cin >> linhas >> colunas;
    int m[linhas][colunas];
    int linha_inicial, coluna_inicial;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> m[i][j];
            if(m[i][j] == 2){
                linha_inicial = i;
                coluna_inicial = j;
            }
        }
    }
    int linha_i = linha_inicial, coluna_i = coluna_inicial, num_salas = 1;
    while(1){
        if(m[linha_i + 1][coluna_i] == 1){
            m[linha_i][coluna_i] = 0;
            linha_i++;
            num_salas++;
        }else if(m[linha_i][coluna_i + 1] == 1){
            m[linha_i][coluna_i] = 0;
            coluna_i++;
            num_salas++;
        }else if(m[linha_i - 1][coluna_i] == 1){
            m[linha_i][coluna_i] = 0;
            linha_i--;
            num_salas++;
        }else if(m[linha_i][coluna_i - 1] == 1){
            m[linha_i][coluna_i] = 0;
            coluna_i--;
            num_salas++;
        }else if(m[linha_i + 1][coluna_i] == 3 || m[linha_i - 1][coluna_i] == 3 || m[linha_i][coluna_i + 1] == 3 || m[linha_i][coluna_i - 1] == 3){
            num_salas++;
            break;
        }else {
            linha_i = linha_inicial;
            coluna_i = coluna_inicial;
            num_salas = 1;
        }
    }
    cout << num_salas;
}