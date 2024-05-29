#include <bits/stdc++.h>
using namespace std;

int main(){
    int E, V;
    cin >> E >> V;
    int t = E * 60 / (double)(V);
    int atual= 19 * 60;
    atual += t;
    int horario = atual % (24*60);
    if(horario < 10){
        cout << "0" << horario/60;
    }else{
        cout << horario / 60;
    }
    if(horario % 60 < 10){
        cout << ":0" << horario%60;
    }else{
        cout << ":" << horario%60;
    }
}