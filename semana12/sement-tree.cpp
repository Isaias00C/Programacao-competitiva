#include <bits/stdc++.h>
#define MAX_INT 100007

using namespace std;

int n, a[MAX_INT];

struct segment_tree {
    int val;
    struct segment_tree* left;
    struct segment_tree* right;
};

void build(struct segment_tree *answer, int tl, int tr){
    if(tl == tr) {
        answer->val = a[tr];
        return;
    }

    int tm = (tl+tr) / 2;

    build(answer->left, tl, tm);
    build(answer->right, tm+1, tr);

    answer->val = answer->left->val + answer->right->val;
}

void update(struct segment_tree *answer, int tl, int tr, int pos, int new_val){
    if(tl == pos && tr == pos){
        answer->val = new_val;
        return;
    }

    int tm = (tl+tr) / 2;

    update(answer->left, tl, tm, pos, new_val);
    update(answer->right, tm+1, tr, pos, new_val);

    answer->val = answer->left->val + answer->right->val;
}

int query_sum(struct segment_tree *answer, int tl, int tr, int l, int r){
    if(tl == tr){
        return answer->val;
    }

    int tm = (tr + tl) / 2;
    int sum_l = query_sum(answer->left, tl, min(r,tm), l, r);
    int sum_r = query_sum(answer->right, max(tl,tm+1), tr, l, r);

    return sum_l + sum_r;
}

signed main(){
    
}