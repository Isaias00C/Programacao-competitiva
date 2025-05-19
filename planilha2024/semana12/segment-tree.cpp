#include <bits/stdc++.h>
#define MAX_INT 100007
#define int long long
using namespace std;

int a[MAX_INT] = {};

struct segment_tree {
    int val;
    struct segment_tree *left;
    struct segment_tree *right;
};

void build(struct segment_tree *t, int tl, int tr){
    if(tl == tr) {
        t->val = a[tr];
        return;
    }

    int tm = (tl+tr) / 2;

    t->left = new segment_tree;
    t->right = new segment_tree;

    build(t->left, tl, tm);
    build(t->right, tm+1, tr);

    t->val = t->left->val + t->right->val;
}

void update(struct segment_tree *t, int tl, int tr, int pos, int new_val){
    if(tr == tl){
        t->val = new_val;
        return;
    }

    int tm = (tl+tr) / 2;

    if(pos <= tm){ 
        update(t->left, tl, tm, pos, new_val);
    }else{ 
        update(t->right, tm+1, tr, pos, new_val);
    }

    t->val = t->left->val + t->right->val;
}

int query_sum(struct segment_tree *t, int tl, int tr, int l, int r){
    if(tl == l && tr == r) return t->val;
    if(l > r) return 0;

    int tm = (tr + tl) / 2;

    int sum_l = query_sum(t->left, tl, tm, l, min(r, tm));
    int sum_r = query_sum(t->right, tm + 1, tr, max(tm+1,l), r);

    return sum_l + sum_r;
}

signed main(){
    int n;
    cin >> n;
    vector<pair<int,int>> infos;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        infos.push_back({(x*x) + (y*y), i});
    }

    sort(infos.begin(), infos.end());
    int ans = 0;
    
    struct segment_tree tree;
    struct segment_tree *p = &tree;

    build(p, 0, n-1);
    
    for(int i = 0; i < n; i++){
        ans += query_sum(p, 0, n - 1, 0, infos[i].second);
        update(p, 0, n - 1, infos[i].second, 1);
    }

    cout << ans << "\n";
    return 0;
}