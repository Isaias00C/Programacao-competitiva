#include<bits/stdc++.h>
#define MAXN 100007
#define int long long
using namespace std;

int a[MAXN], t[4 * MAXN];

//t: segment tree em vetor
//a: matriz dos valores

void build(int v, int tl, int tr){
    if(tr == tl) {
        t[v] = a[tr];
        return;
    }
    int tm = (tr +tl) / 2;
    build(2*v, tl, tm);
    build(2*v + 1, tm+1, tr);

    t[v] = t[2*v] + t[2*v + 1];
}

void update(int v, int tl, int tr, int indice, int valorAtualizado){
    if(tr == tl){
        t[v] = valorAtualizado;
        return;
    }

    int tm = (tr + tl) / 2;
    if(indice <= tm){
        update(2*v, tl, tm, indice, valorAtualizado);
    }else {
        update( 2*v + 1, tm+1, tr, indice, valorAtualizado);
    }

    t[v] = t[2*v] + t[2*v + 1];
}

int query(int v, int tl, int tr, int l, int r){
    if(tr == r && tl == l) return t[v];
    if(l > r) return 0;

    int tm = (tr + tl) / 2;

    int sum_l = query(2*v, tl, tm, l, min(r, tm));
    int sum_r = query(2*v + 1, tm+1, tr, max(tm+1,l), r);

    return sum_l + sum_r;
}

signed main(){
    int n;
    cin >> n;
    vector<pair<int,int> > infos;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x, y;
        infos.push_back({(x*x) + (y*y), i});
    }

    sort(infos.begin(), infos.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += query(1, 0, n - 1, 0, infos[i].second);
        update(1, 0, n - 1, infos[i].second, 1);
    }

    cout << ans << "\n";
    return 0;
}
