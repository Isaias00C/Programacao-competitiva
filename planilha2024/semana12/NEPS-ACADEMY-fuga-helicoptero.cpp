#include <bits/stdc++.h>
using namespace std;

int main(){
    int H, P, F, D;
    cin >> H >> P >> F >> D;

    while(H != F && P != F){
        F += D;
        if(F == 16) F = 0;
        if(F == -1) F = 15; 
    }

    if(F == H) cout << "S\n";
    else cout << "N\n";
}