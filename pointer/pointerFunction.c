#include <stdio.h>
void printSwap();
void swap(int *n1, int *n2);

void printAddOne();

int main()
{
//    printSwap();
   printAddOne();
    return 0;
}

void printSwap(){
    int num1 = 5, num2 = 10;

    // address of num1 and num2 is passed
    swap( &num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);
}

void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


void addOne(int* ptr) {
  (*ptr)++; // adding 1 to *ptr
}

void printAddOne(){
    int* p, i = 10;
    p = &i;
    addOne(p);

    printf("%d", *p); // 11
}
