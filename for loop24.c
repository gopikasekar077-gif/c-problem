#include <stdio.h>
int main() {
    int n, temp, reverse = 0;
    scanf("%d", &n);
    temp = n;
    for(int i = n; i > 0; i = i / 10) {
        reverse = reverse * 10 + (i % 10);
    }

    if(temp == reverse)
        printf("Yes");
    else
        printf("No");

    return 0;
}