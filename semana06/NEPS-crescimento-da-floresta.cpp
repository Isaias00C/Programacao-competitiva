#include <bits/stdc++.h>
using namespace std;

int main(){
    int arvores_iniciais, mudas_por_dia, arvores_finais;
    cin >> arvores_iniciais >> mudas_por_dia >> arvores_finais;
    int dias = 0;
    while(arvores_iniciais < arvores_finais){
        arvores_iniciais = arvores_iniciais*(mudas_por_dia + 1);
        dias += 1;
    }
    cout << dias;

}