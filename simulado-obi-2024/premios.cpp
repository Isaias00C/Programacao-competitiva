#include <iostream>
using namespace std;

int main(){
    int paes, doce, bolo;
    cin >> paes >> doce >> bolo;

    int pontos = (1* paes) + (2*doce) + (3*bolo);

    if(pontos < 100){
        cout << "N";
    }else if(pontos < 120){
        cout << "P";
    }else if(pontos < 150){
        cout << "D";
    }else{
        cout << "B";
    }
}