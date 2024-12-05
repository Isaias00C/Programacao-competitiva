//Questao sobre 'do while'  

#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, y;

    //entrando com os limites do intervalo
    cout << "digite um numero: ";
    cin >> x;
    cout << "digite outro numero: ";
    cin >> y;

    //vamos usar um auxiliar para salvar o valor de x
    int x1 = x;

    //verificando se x é par
    if(x%2 == 0){
        
        cout << "vamos imprimir os numeros pares entre x e y: ";
        do {

            cout << x << " ";
            x = x+2;

        }while (x <= y);

        cout << "\n";
        cout << "vamos imprimir os numeros impares entre x e y: ";

        do {

            cout << x1 + 1 << " ";
            x1 = x1 + 2;

        }while (x1 <= y);

    }else {
        //se nao é par entao é impar

        cout << "vamos imprimir os numeros impares entre x e y: ";
        do {

            cout << x << " ";
            x = x+2;

        }while (x <= y);

        cout << "\n";
        cout << "vamos imprimir os numeros pares entre x e y: ";

        x1 = x1 + 1;
        do {

            cout << x1 << " ";
            x1 = x1 + 2;

        }while (x1 <= y);

    }
    
    //fim

    return 0;
}