#include <stdio.h>
void viewAddress();
void getValue();
void changingValue();
void example1();

int main(){
    // viewAddress();
    // getValue();
    // changingValue();
    example1();
    
  return 0;
}

void viewAddress(){
    int var = 5;
    printf("var: %d\n", var);

    // Notice the use of & before var
    printf("address of var: %p", &var); 
    printf("-----------"); 
}

void getValue(){
    int* pc, c;
    c = 5;
    pc = &c;
    printf("\n%d", *pc);   // Output: 5

}

void changingValue(){
    int* pc, c, d;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d", c);    // Output: 1
    printf("%d", *pc);  // Ouptut: 1


    printf("\n------------------\n");
    c = 5;
    d = -15;

    pc = &c; printf("%d", *pc); // Output: 5
    pc = &d; printf("%d", *pc); // Ouptut: -15
}

void example1(){
    int* pc, c;
   
    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);  // 22
    
    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); // 22
    
    c = 11;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc); // 11
    
    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c); // 2
}