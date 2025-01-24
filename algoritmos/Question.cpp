//https://atcoder.jp/contests/abc389/tasks/abc389_e

#include <bits/stdc++.h>
#define int long long
using namespace std;

int verificar(vector<int>& precos, int qtd_de_itens, int maximo_valor_gasto, vector<int>& _k, int X){
    int valor_restante = maximo_valor_gasto;

    for (int i = 0; i < qtd_de_itens; ++i){
        int j = (X + precos[i])/(2*precos[i]); //numemo maximo de unidades possivel de compra
        int valor_gasto = j*j*precos[i]; //preço total gasto pra conseguir comprar todas a unidades ate j

        if(valor_gasto > valor_restante) return -1;

        valor_restante -= valor_gasto;
        _k[i] = j; 
    }

    return valor_restante;
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int qtd_de_itens, maximo_valor_gasto;
    cin >> qtd_de_itens >> maximo_valor_gasto;

    vector<int> precos(qtd_de_itens);

    for (int i = 0; i < qtd_de_itens; ++i) cin >> precos[i];

    /*  
        seja i um item a ser comprado, e Pi = precos[i] o preço da 1a unidade e P = i^2*Pi o preço total gasto no item, assim o preço por unidade é [Pi, 3Pi, 5Pi, ...], ou seja, o preço de uma unidade é do tipo Pi(k) = (2k - 1)Pi, onde k é a qtd de unidades compradas
    */
    
    /*
        vamos iniciar criando um vetor onde armazenaremos a qtd maxima de unidades de um produto para um certo valor gasto X e um vetor auxiliar para salvar a resposta final da qtd maxima de unidades
    */

    vector<int> _k (qtd_de_itens), k(qtd_de_itens);

    /*
        agora vamos procurar o maior valor de X tal que possamos comprar a maior qtd de unidades sem extrapolar o valor_restante que ainda poderemos gastar em cada iteração (estrategia gulosa), para isso precisaremo de duas coisas, uma função para verificar se o valor gasto extrapola o valor_restante e uma busca binaria para procurar esse X
    */

    //busca binaria

    int l = 0, r = maximo_valor_gasto, final_valor_restante = maximo_valor_gasto, final_valor_gasto = 0;

    while (l <= r){
        int X = (l + r)/2;

        int valor_restante = verificar(precos, qtd_de_itens, maximo_valor_gasto, _k, X);

        if (valor_restante >= 0){
            for (int i = 0; i < qtd_de_itens; ++i) k[i] = _k[i];
            final_valor_restante = valor_restante;
            final_valor_gasto = X;
            l = X + 1;
        }else r = X - 1;
    }

    //Por fim vamos verificar se para o final_valor_restante ainda podemos comprar alguma coisa e somar a resposta
    
    int ans = 0;

    for (int i = 0; i < qtd_de_itens; ++i){
        ans += k[i];
        int proxima_compra = (2*(k[i]+1) - 1)*precos[i];
        if (proxima_compra <= final_valor_gasto + 1 && final_valor_restante - proxima_compra >= 0){
            final_valor_restante -= proxima_compra;
            ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}