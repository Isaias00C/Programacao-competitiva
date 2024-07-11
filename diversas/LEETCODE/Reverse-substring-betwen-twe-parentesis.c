#include <stdio.h>

char* reverseParentheses(char* s) {
    for(char *p = s; *p != '/0'; p++){
        if(*p == '('){
            for(char *q = p + 1;; q++){
                if(*q == '(') break;
                else if(*q == ')'){
                    for(char *c1 = p + 1, *c2 = q - 1; c2 > c1; c1++, c2--){
                        char aux = *c1;
                        *c1 = *c2;
                        *c2 = aux;
                    }
                    *p = " ";
                    *q = " ";
                    p = s;
                }
            }
        }
    }
    for(char *p = s; *p != "/0"; p++){
        if(*p == ' ' || *p == ' ') continue;
        return *p;
    }
}

int main(){
    char s[100];
    gets(s);
    puts(reverseParentheses(s));
    return 0;
}