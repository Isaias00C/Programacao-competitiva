#include <bits/stdc++.h>
using namespace std;

int main(){
    static const basic_string <char>::size_type npos = -1;
    vector<string> frase;
    string palavra, controle;
    while(getline(cin, palavra, ' ')){
        frase.push_back(palavra);
    }
    int contador_de_palavras = 0;

    string aux = frase[frase.size() - 1], aux2;

    int flag = aux.find_first_of("\n");
    //find_first_of(<string>) -> retorna o indice da primeira ocorrencia de um dos caracteres da <string>
    controle = aux.substr(flag + 1, aux.size() - flag + 1);
    aux2 = aux.substr(0, flag);
    //substr -> copia a substring a partir de um indice especificado com um numero de caracteres especificado
    frase.pop_back();
    frase.push_back(aux2);
    for(int i = 0; i < frase.size(); i++){
        if(frase[i].find_first_of(controle) != npos){
            contador_de_palavras++;
        }
    }
    cout << contador_de_palavras;
}