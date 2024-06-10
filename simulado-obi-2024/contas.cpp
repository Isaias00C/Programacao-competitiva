#include <iostream>
using namespace std;

int main(){
    int dinheiro, acougue, farmacia, padaria;
    cin >> dinheiro >> acougue >> farmacia >> padaria;

    if(dinheiro >= acougue + farmacia + padaria){
        cout << "3";
    }else if( dinheiro >= acougue + farmacia || dinheiro >= acougue + padaria || dinheiro >= padaria + farmacia){
        cout << "2";
    }else if( dinheiro >= acougue || dinheiro >= farmacia || dinheiro >= padaria){
        cout << "1";
    }else {
        cout << "0";
    }
}