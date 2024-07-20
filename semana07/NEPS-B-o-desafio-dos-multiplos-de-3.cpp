#include <bits/stdc++.h>
using namespace std;

int main(){
    string num;
    cin >> num;
    int soma = 0;
    for(int i = 0; i < num.size(); i++){
        soma += num[i] - '0';
    }
    if(soma % 3 != 0){
        cout << -1;
        return 0;
    }else{
        sort(num.rbegin(), num.rend());
    }
    cout << num;
}