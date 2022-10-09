#include <stdio.h>
 
int main(void)
{
  int a;
 
  printf("Masukan Bilangan : ");
  scanf("%d",&a);
 
  printf("\n");
 
  if (a >= 0) {
    printf("POSITIF \n");
  }
  else {
    printf("NEGATIF \n");
  }
 
  return 0;
}
