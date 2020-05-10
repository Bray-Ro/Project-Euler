#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int exp = 1000;
    
    int base = 2;
    double powerValue = pow(base, exp);
    char valueStr[303];

    snprintf(valueStr, 303, "%f", powerValue);

    int i = 0;
    int long sum = 0;
    while (i < 303) {
        char currentNumStr[300];
        currentNumStr[0] = valueStr[i];
        sum = sum + atoi(currentNumStr);

        i++;
    }
    printf("%ld", sum);
    
    return 0;
}
