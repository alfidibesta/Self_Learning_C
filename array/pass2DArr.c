#include <stdio.h>
#define MAX_SIZE 1000

void displayNumbers(int num[MAX_SIZE][MAX_SIZE], int m, int n);

  
//   printf("Enter array row numbers:\n");
//   scanf("%d",&m);

//   printf("Enter array collumn numbers:\n");
//   scanf("%d",&n);

int main() {

  const int n,m;
    
  printf("Enter array row numbers:\n");
  scanf("%d",&m);

  printf("Enter array collumn numbers:\n");
  scanf("%d",&n);
  int num[m][n];

  printf("Enter 4 numbers:\n");
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%d", &num[i][j]);
    }
  }

  // pass multi-dimensional array to a function
  displayNumbers(num, m ,n);

  return 0;
}

void displayNumbers(int num[MAX_SIZE][MAX_SIZE], int m, int n) {
  printf("Displaying:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d\n", num[i][j]);
    }
  }
}