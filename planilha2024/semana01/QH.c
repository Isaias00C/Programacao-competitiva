#include <stdio.h>

int main(){
  int a, b, c, l, h;

  scanf("%d %d %d", &a, &b, &c);

  scanf("%d %d", &h, &l);

  if((a <=h && b <= l) || (b <= h && a <= l)){  //passar com o lado ab
    printf("S\n");
  }else if((a <=h && c <= l) || (c <= h && a <= l)){  //passar com o lado ac
    printf("S\n");
  }else if((c <=h && b <= l) || (b <= h && c <= l)){  //passar com o lado bc
    printf("S\n");
  }else
    printf("N\n");

  
  return 0;
}
