#include <stdio.h>
int current3 = 3;
int current5 = 5;
int main(void) {
  
  printf("Project euler 1 By Rohan\n");
  while (current3 < 1000 || current5 < 1000) {
    char current3Str[4];
    char current5Str[4];
    sprintf(current3Str, "%d", current3);
    sprintf(current5Str, "%d", current5);
    
    printf("\n%d", current3);
    current3 = current3 + 3;
    if (current5 < 1000) {
    printf("\n%d", current5);
    current5 = current5 + 5;
    }
    
    
  }
  return 0;
}
