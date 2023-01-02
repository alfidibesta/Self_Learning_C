#include <stdio.h>
int main(){
    char c;
    float f;
    printf("Enter a character char: ");
    scanf("%c", &c);
    printf("Enter a character float: ");
    scanf("%f", &f);

    // %d display the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    printf("\nFloat %f", f);
    return 0;
}