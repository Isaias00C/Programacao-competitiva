#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int isLoged = 0, error = 0;

    while(n--){
        string s;
        cin >> s;

        if(s == "login") isLoged = 1;
        if(s == "logout") isLoged = 0;
        if(s == "private" && !isLoged) error++;
    }

    cout << error;
}