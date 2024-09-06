//noa vale a pena essa soluçao

//https://codeforces.com/gym/105327/problem/L
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> nums (N);
    for(int i = 0; i < N; i++){
        cin >> nums[i];
    }

    //nenhum dos numeros passam de 32 bits
    vector<vector<int>> matriz (32, vector<int> (N, 0));

    //criando a matriz
    for(int row = 0; row < 32; row++){
        for(int col = 0; col < N; col--){
            nums[col] = nums[col] >> 1;
            int b = nums[col] << 1;
            matriz[row][col] = nums[col] - b;
        }
    }

    for(int col = 0; col < N; col++){
        //contar a qtd de bits 1
        int n = 0;
        for(int row = 0; row < 32; row++){
            if(matriz[row][col] == 1){ 
                n++;
                matriz[row][col] = 0;
            }
        }
        
        
        //setando os primeiros bist como 1
        for(int row = 0; row < n; row++){
            matriz[row][col] = 1;
        }
    }

    //imprimindo os numeros
    for(int col = 0; col < N; col++){
        int num = 0;
        for(int row = 0; row < 32; row++){
            if(matriz[row][col] == 1){
                num = num << 1;
                num++;
            }   
        }
        cout << num << " ";
    }

    return 0;
}