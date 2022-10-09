#include <stdio.h>

using namespace std; 
int main(void)
{
  int x; 
 
  printf("masukan bilangan: "); 
  scanf("%d",&x);
 
  printf("\n");
 
  if (x > 0) {
    printf("POSITIF \n"); 
  }
  else {
    printf("NEGATIF \n"); 
  }
 
  return 0;//end
}
