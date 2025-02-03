//https://atcoder.jp/contests/abc391/tasks/abc391_a

#include <bits/stdc++.h>
using namespace std;

int main(){
    string D;
    cin >> D;

    if (D == "N") cout << "S\n";
    if (D == "E") cout << "W\n";
    if (D == "S") cout << "N\n";
    if (D == "W") cout << "E\n";
    if (D == "NE") cout << "SW\n";
    if (D == "SE") cout << "NW\n";
    if (D == "SW") cout << "NE\n";
    if (D == "NW") cout << "SE\n";

    return 0;
}