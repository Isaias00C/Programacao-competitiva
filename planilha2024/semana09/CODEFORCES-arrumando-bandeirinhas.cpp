#include <bits/stdc++.h>
using namespace std;

string makeString(int Type, string flags){
    int cont = 1;
    while(cont != Type){
        string flag = flags;
        flags += cont + 'a';
        flags += flag;
        cont++;
    }
    if(flags.size() > 1e5){
        flags.resize(1e5);
    }
    return flags;
}

int main(){
    int Type;
    cin >> Type;
    cout << makeString(Type, "a") << "\n";
}