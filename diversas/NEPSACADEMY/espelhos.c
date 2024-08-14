//https://neps.academy/br/competition/2006/exercise/2749

#include <stdio.h>
#include <stdlib.h>

void f(int *v);

int main(){
    int N, q;
    scanf("%d", &N);
    int *p = malloc(sizeof(int) * (N + 1));

    if(!p) return 0;

    for(int i = 0; i < N; i++) scanf("%d", &p[i]);
    p[N] = NULL;

    scanf("%d", &q);

    while(q) {
        f(p); 
        printf("numero da repetiçao: %d\n", q--);
    }

    free(p);
}

void f(int *v){
    char op;
    int left, right, num = 0;

    scanf("%c %d %d", &op, &left, &right);

    if(op == '?'){
        for(left; left <= right; left++){
            num = 10 * num;
            num += v[left-1];
        }
        if(num % 3 == 0) printf("S\n");
        else printf("N\n");
    }else if(op == '!'){
        for(int i = 0; v[i]; i++){
            switch (v[i]) {
                case 2:
                    v[i] = 5;
                    break;
                case 5:
                    v[i] = 2;
                    break;
                case 6:
                    v[i] = 9;
                    break;
                case 9:
                    v[i] = 6;
                default:
                    break;
            }
        }
    }
}