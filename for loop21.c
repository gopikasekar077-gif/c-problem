#include <stdio.h>
#include <math.h>
int main() {
    int n, remainder, decimal = 0;
    scanf("%d", &n);
    for(int i = 0; n != 0; i++) {
        remainder = n % 10;         
        decimal = decimal + remainder * pow(2, i);
        n = n / 10;                 
    }
    printf("%d", decimal);
    return 0;
}