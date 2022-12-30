#include <stdio.h>

// int main(void) {
  
//   for (int i = 0; i < 5; ++i) {
//      printf("C programming");
//   }
  
//  // Error: i is not declared at this point
//   printf("%d", i);  
//   return 0;
// }

    void display();

    int n = 5;  // global variable

    int main()
    {
        ++n;     
        display();
        return 0;
    }

    void display()
    {
        ++n;   
        printf("n = %d", n);
    }