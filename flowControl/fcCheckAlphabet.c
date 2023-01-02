#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);

    // if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    //     printf("%c is an alphabet.", c);
    // else 
    //     printf("%c is not an alphabet.", c);


    //shorthand with lib isalpha
    (isalpha(c)) ? printf("%c is an alphabet", c) : printf("%c is not an alphabet");
    return 0;
}