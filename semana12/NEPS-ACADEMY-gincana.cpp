#include <iostream>
#define int long long
using namespace std;

int mdc(int a, int b){
    if(a%b == 0) return b;
    else return mdc(b, a%b);
}

signed main(){
    int M, N;
    cin >> N >> M;
    for(M; mdc(N, M) != 1; M--);
    cout << M;
}