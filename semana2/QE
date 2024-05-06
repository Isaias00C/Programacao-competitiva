#include <stdio.h>

int main() {
  int numSorteados[7], numFlavio[7], acertos = 0;
  int i, j;

  for (i = 0; i < 6; i++) {
    scanf("%d", &numSorteados[i]);
  }
  for (i = 0; i < 6; i++) {
    scanf("%d", &numFlavio[i]);
  }

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (numSorteados[i] == numFlavio[j]) {
        acertos++;
      }
    }
  }

  switch (acertos) {
  case 3:
    printf("terno\n");
    break;
  case 4:
    printf("quadra\n");
    break;
  case 5:
    printf("quina\n");
    break;
  case 6:
    printf("sena\n");
    break;
  default:
    printf("azar\n");
    break;
  }

return 0;
}
