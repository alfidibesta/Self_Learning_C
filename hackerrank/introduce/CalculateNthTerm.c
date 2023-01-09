#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int arr[30] = {a,b,c};
  int sum=0, sum1=0;

  if (n == 1){return a;}
  else if (n == 2){return b;}
  else if (n == 3){return c;}
  else {
    for(int i=0; i< n-3; i++){
            sum =  arr[i+2] + arr[i+1] + arr[i];
            printf("sum %d = %d + %d + %d\n", sum, arr[i+2] + arr[i+1] + arr[i]);
            arr[i + 3] = sum;
            sum1 = arr[i + 3];
        }
        
        return sum1;
    }
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}