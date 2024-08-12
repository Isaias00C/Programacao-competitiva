//https://neps.academy/br/competition/2007/exercise/2755
#include <bits/stdc++.h>
using namespace std;

void f(){
    int cont = 0;
    string s, t;

    cin >> s >> t;

    int i, j;
    for(i = 0, j = 0; i < s.size(); i++){
        if(j == t.size()) {
            cont++;
            j = 0;
        }
        if(s[i] == t[j]) j++;
        else j = 0;
    }
    if(j == t.size()) {
        cont++;
        j = 0;
    }
    

    cout << cont;
}

int main(){
    f();
}