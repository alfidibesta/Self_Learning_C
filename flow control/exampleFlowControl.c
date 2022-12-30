#include <stdio.h>
#include <ctype.h>

int main(){


    /* switch case*/
    // char operation;
    // double n1, n2;

    // printf("Enter an operator (+, -, *, /): ");
    // scanf("%c", &operation);
    // printf("Enter two operands: ");
    // scanf("%lf %lf",&n1, &n2);

    // switch(operation)
    // {
    //     case '+':
    //         printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
    //         break;

    //     case '-':
    //         printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
    //         break;

    //     case '*':
    //         printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
    //         break;

    //     case '/':
    //         printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
    //         break;

    //     // operator doesn't match any case constant +, -, *, /
    //     default:
    //         printf("Error! operator is not correct");
    // }

    /* Goto */
//    const int maxInput = 100;
//    int i;
//    double number, average, sum = 0.0;

//    for (i = 1; i <= maxInput; ++i) {
//       printf("%d. Enter a number: ", i);
//       scanf("%lf", &number);
      
//       // go to jump if the user enters a negative number
//       if (number < 0.0) {
//          goto jump;
//       }
//       sum += number;
//    }

//     jump:
//         average = sum / (i - 1);
//         printf("Sum = %.2f\n", sum);
//         printf("Average = %.2f", average);


    // Exmaple

    /* short if else*/
    // (number % 2 == 0) ? printf("%d is even.", number) : printf("%d is odd.", number);

    /* check vowel*/
    // char c;
    // int lowercase_vowel, uppercase_vowel;
    // printf("Enter an alphabet: ");
    // scanf("%c", &c);

    // // evaluates to 1 if variable c is a lowercase vowel
    // lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // // evaluates to 1 if variable c is a uppercase vowel
    // uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // // Show error message if c is not an alphabet
    // if (!isalpha(c))
    //     printf("Error! Non-alphabetic character.");
    // else if (lowercase_vowel || uppercase_vowel)
    //     printf("%c is a vowel.", c);
    // else
    //     printf("%c is a consonant.", c);


    return 0;
}