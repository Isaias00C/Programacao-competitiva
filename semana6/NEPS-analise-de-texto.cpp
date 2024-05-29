#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> frase;
    string palavras;
    
    while(getline(cin, palavras, ' ')){
        frase.push_back(palavras);
    }
    string controle;
    cin >> controle;
    int contador_de_palavras;
    for(int i = 0; i < frase.max_size(); i++){
        string palavra = frase[i];
        int j = 0;
        if(frase[i].find(palavra[j]) != frase[i].end()){
            contador_de_palavras++;
        }
    }
    cout << contador_de_palavras;
}