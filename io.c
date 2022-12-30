#include <stdio.h>

int main(){
    char name[50], name2[50], name3[50], name4[50];

    printf("Scanf name :");
    scanf("%s", &name);
    printf("Scanf nama anda : %s", name);

    printf("\n--------------------------\n");
    printf("Scanf with space name :");
    scanf("%[^\n]s", &name2);
    printf("Scanf with space nama anda : %s\n", name2);

    printf("\n--------------------------\n");
    printf("Gets name :");
    gets(name3);
    printf("Gets nama anda : %s\n", name3);

    printf("\n--------------------------\n");
    printf("Fgets name: ");
    fgets(name4, sizeof(name4), stdin);
    printf("Fgets nama anda : %s", name4);

    printf("\n--------------------------\n");
    return 0;
}