#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b, intPlus, intMin;
    float c,d, floatPlus, floatMin;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    intPlus     =a+b;
    intMin      =a-b;
    floatPlus   =c+d;
    floatMin    =c-d;
    
    printf("%d %d\n", intPlus, intMin);
    printf("%.1f %.1f", floatPlus, floatMin);
    
    return 0;
}