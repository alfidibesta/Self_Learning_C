#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    // for(int i = 0; i < n; i++){
    //     if(n%10)
    // }
    int a=0;
    while(n!=0){
        a+=n%10;
        printf("%d\n", a);
        n/=10;
        printf("%d\n", n);
    }
    printf("%d",a);
    return 0;
    return 0;
}