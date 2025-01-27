#include <bits/stdc++.h>
using namespace std;

vector<int> swap(vector<int> v, int i, int j){
    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;

    return v;
}

int isSorted(vector<int> v){
    for (int i = 1; i < 5; ++i){
        if (v[i] < v[i-1]) return 0;
    }

    return 1;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> v(5);

    for (int i = 0; i < 5; ++i){
        cin >> v[i];
    }

    vector<int> v_aux = {1,2,3,4,5};

    int c = 0;
    for (int i = 0; i < 4; ++i){   
        c += isSorted(swap(v, i, i+1));
    }

    if (c == 1) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}