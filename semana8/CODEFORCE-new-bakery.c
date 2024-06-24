#include <stdio.h>
#include <math.h>

int Equacao(int n, int a, int b){
    int k = b - a + 1;
    if(k > n){
        return n*b - (1+n)*n/2 + n; 
    }else if(k < 0){
        return a*n;
    }else{
        return k*b - (1+k)*k/2 + k + (n-k)*a;
    }
}
int main(){
    int numCases;
    scanf("%d", &numCases);
    for(int i = 0; i < numCases; i++){
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        printf("%d\n", Equacao(n, a, b));
    }
    return 0;
}
//first k buns : price = b - i + 1
//last n-k buns : price = a
//Profit = kb - (1+k)k/2 + k + (n-k)a
//         an + (b - a + 1/2)k - k²/2
//maxK = -(b - a + 1/2)/2(-1/2)
//maxK = b - a + 1/2
//maxProfit = - ((b - a + 1/2)² - 4(-1/2)*an)/4(-1/2) 


//caso teste 5 5 11
// 11 10 9 8 7 = 45