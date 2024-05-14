#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long int M, B;
    
  scanf("%ld %ld", &M, &B);

  long int pastas[1000];
  long long int sum = 0;
  
  for(int i = 0;i < M; i++){
    scanf("%ld", &pastas[i]);
    sum += pastas[i];
  }
  if(sum%B == 0){
    printf("%ld", sum/B);
  }else
    printf("%ld", (sum/B) + 1);
  return 0;
}
