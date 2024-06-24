#include <stdio.h>

int main(){
    int year;
    scanf("%d", &year);
    printf("%d\n", 2024 - 2*(2024 - year));
}