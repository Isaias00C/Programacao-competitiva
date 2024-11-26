#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node *rightNode;
        Node *leftNode;
}

class SegTree {
    public:
        SegTree() {
            
        }

        void build (Node *t, int tl, int tr){
            if (tl == tr) {
                t->val = a[tr];
                
            }
        }
}


//Def: Dado um vetor v, dizemos que v[i] e v[j] estão invertidos se i < j e v[i] > v[j]
//Ex.: v = {3,2,4} => assim 3 e 2 estão invertidos
//indices   0 1 2
//Problema: Dado um vetor v[0...n-1]. contar o numero de inversões de v

int solucaoTrivial (int n, vector<int> v) {
    int resposta = 0;

    for (int i = 0; i < v.size(); ++i) {
        for (int j = i+1; j < v.size(); ++j) {
            if (v[i] > v[j]) resposta++;
        }
    }

    return resposta;
}




int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    return 0;
}
