#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cobra[6];

  for(int i = 0; i < 4; i++){
    scanf("%d", &cobra[i]);
  }

  if(cobra[0] == cobra[2] || cobra[1] == cobra[3]){
    printf("V\n");
  }else
    printf("F\n");
  return 0;
}
