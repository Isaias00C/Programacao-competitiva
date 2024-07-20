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
    for(int m = 0; m < linhas - 1; m++){
        for(int n = 0; n < colunas - 1; n++){
            //rodar toda a linha    
            for(int j = m; j < colunas; j++){    
                if(matriz[n][m] - matriz[n][j] > maior_valor ){
                    maior_valor = matriz[n][m] - matriz[n][j];
                }
            }
            //rodar toda a coluna
            for(int i = n; i < linhas; i++){
                if(matriz[n][m] - matriz[i][m] > maior_valor){
                    maior_valor = matriz[n][m] - matriz[i][m];
                }
            }
        }
    }
    cout << maior_valor;
}