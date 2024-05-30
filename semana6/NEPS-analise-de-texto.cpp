#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> frase;
    string palavras;
    
    while(getline(cin, palavras, ' ')){
        if(palavras == "fim"){
            break;
        }
        frase.push_back(palavras);
    }
    
    basic_string<char>::size_type controle;
    cin >> controle;
    int contador_de_palavras;

    for(int i = 0; i < frase.size(); i++){
        cout << frase[i] << " ";
        if(frase[i].find_first_of(controle) != -1){
            contador_de_palavras++;
        }
    }
    cout << "\n" << contador_de_palavras;
}