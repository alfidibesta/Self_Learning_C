#include <stdio.h>
int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
        //showing process
        printf("%d + ", i);
    }

    printf("\nSum = %d", sum);
    return 0;
}

