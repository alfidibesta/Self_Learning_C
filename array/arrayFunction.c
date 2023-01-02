#include <stdio.h>
float calculateSum(float num[]);
void inputCalculateSum();
void inputTwoD();
void displayNumbers();

int main() {
//   inputCalculateSum();
  inputTwoD();
  return 0;
}

// Program to calculate the sum of array elements by passing to a function 
void inputCalculateSum(){
    float result, num[] = {23.4, 55, 22.6, 3, 40.5, 18};

    // num array is passed to calculateSum()
    result = calculateSum(num); 
    printf("Result = %.2f", result);
}
float calculateSum(float num[]) {
  float sum = 0.0;

  for (int i = 0; i < 6; ++i) {
    sum += num[i];
  }

  return sum;
}

// Pass Multidimensional Arrays to a Function
void inputTwoD(){
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
        scanf("%d", &num[i][j]);
        }
    }

    // pass multi-dimensional array to a function
    displayNumbers(num);
}

void displayNumbers(int num[2][2]) {
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
        printf("%d\n", num[i][j]);
        }
    }
}