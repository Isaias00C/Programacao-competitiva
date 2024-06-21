#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int numCases;
    scanf("%d", &numCases);
    for(int i = 0; i < numCases; i++){
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        printf("%d\n", floor(- (((b - a - 1/2)*(b - a - 1/2) - 4*(-1/2)*a*n))/4*(-1/2)));
    }
}
//first k buns : price = b - i + 1
//last n-k buns : price = a
//Profit = kb - (1+k)k/2 + k + (n-k)a
//         an + (b - a - 1/2)k - k²/2
//maxProfit = - ((b - a - 1/2)² - 4(-1/2)*an)/4(-1/2) 