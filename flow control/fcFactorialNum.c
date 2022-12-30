#include <stdio.h>
int main(){
    // int n, i;
    // unsigned long long fact = 1;
    // printf("Enter an integer: ");
    // scanf("%d", &n);

    // //show error if the user enter negative integer
    // if(n<0)
    //     printf("Error! Factorial of a negative number doesn't exist.");
    // else {
    //     for(i=1; i<=n; ++i){
    //         fact *= i;
    //         //showing process factorial
    //         printf("%d x ", i);
    //     }
    //     printf("\nFactorial of %d = %llu", n, fact);
    // }


    int n, i, range;
    printf("Enter an integer: ");
    scanf("%d", &n);
    // prompt user for positive range
    do {
        printf("Enter the range (positive integer): ");
        scanf("%d", &range);
    } while (range <= 0);

    for (i = 1; i <= range; ++i) {
        printf("%d * %d = %d \n", n, i, n * i);
    }

    return 0;
}