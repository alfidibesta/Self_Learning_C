#include <stdio.h>

int main(){
    int mark[5] = {19,10,8,17,9};
    int i =1;

    // printing all element array with loop
    printf("Displaying integer in array :\n");
    for(int i =0; i<5; ++i){
        printf("%d ", mark[i]);
    }

    printf("\nChange value Array \n");
    // make mark the value of the third element to -1
    mark[2] = -1;
    printf("array [2] : %d\n", mark[2]);
    mark[4] = 0;
    printf("array [4] : %d\n", mark[4]);
    
    // take input and store it in the element
    printf("\ninput change value array [2]: ");
    scanf("%d", &mark[2]);
    printf("input change value array [i-1]: ");
    scanf("%d", &mark[i-1]);

    // print THe element of the array
    printf("\narray[0] %d \n", mark[0]);
    printf("array[1] %d\n", mark[1]);
    printf("array[2] %d\n", mark[2]);
    printf("array[i-1]%d\n", mark[i-1]);

    printf("\nDisplaying LAST integer in array :\n");
    for(int i =0; i<5; ++i){
        printf("%d ", mark[i]);
    }

    printf("\n\n-------AVARAGE-------------\n");
    int marks[10], a, n, sum=0;
    double avarage;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(a =0; a <n; ++a){
        printf("Enter number %d : ", a+1);
        scanf("%d", &marks[a]);
    
    // adding integer emnetered by the user to the sum varianble
    sum += marks[a];
    }
    // explisitly convert sum to double
    // the calculate avarage
    avarage = (double) sum / n;
    printf("Avarage = %.2lf", avarage);

    return 0;
}