#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    for(int i = 1; i <= A; i++){
        if(A % i != 0) continue;
        if(B >= A - i){
            cout << i << "\n";
            break;
        }
    }

    return 0;
}