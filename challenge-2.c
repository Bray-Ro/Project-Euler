#include <stdio.h>
int fibs[1000000] = {1, 2};
int fibIndex = 0;
int evenFibs[11];
int evenFibIndex = 0;
int sum = 0;
int main(void) {
  printf("project euler challenge 2 by rohan\n");
  while (fibs[fibIndex] < 4000000) {
    
    int currentFib = fibs[fibIndex] + fibs[fibIndex - 1];
    fibs[fibIndex + 1] = currentFib;

    if (fibs[fibIndex + 1] % 2 == 0) {
      evenFibs[evenFibIndex + 1] = fibs[fibIndex + 1];
      
      evenFibIndex++;
      
    }
    
    fibIndex++;
    
  }
  int i = 1;
  while (i < 11) {
    sum = sum + evenFibs[i];
    
    i++;
  }
  printf("\n%d", sum);
  return 0;
}
