#include <stdio.h>
void intro();
void twoDi();
void sumMatrix();
void threeDi();
void insertArray();
int main(){
    // intro();
    // twoDi();
    // sumMatrix();
    // threeDi();
    insertArray();
    return 0;
}

void intro(){
    // two dimension array
    int two[2][3] = {{1, 3, 0}, {-1, 5, 9}};
    //three dimension array
    int three[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}
    };
    
    printf("array 2D : \n");
    //print array two dimension
    for(int i=0; i<2; ++i){
        for(int j=0; j<3; ++j){
            printf("%d\t", two[i][j]);
        }
        printf("\n");
    }
    //print per array
    for(int i =0; i<2; ++i){
        for(int j=0; j<3; ++j){
            printf("array indeks [%d][%d] : %d\n",i,j,two[i][j] );
        }
        printf("\n");
    }

    printf("\narray 3D : \n");
    // print array three dimension
    for(int i=0; i < 2; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<4; ++k){
                printf("%d\t", three[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    // 
    for(int i=0; i < 2; ++i){
        for(int j=0; j<3; ++j){
            for(int k=0; k<4; ++k){
                printf("array indeks [%d][%d][%d] : %d\n", i,j,k, three[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

}

void twoDi(){
    printf("Two-dimensional array to store and print valuesn\n");
    const int CITY = 2;
    const int WEEK = 7;
    int temperature[CITY][WEEK];

    // Using nested loop to store values in a 2d array
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
        printf("City %d, Day %d: ", i + 1, j + 1);
        scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying values: \n\n");

    // Using nested loop to display vlues of a 2d array
    for (int i = 0; i < CITY; ++i)
    {
        for (int j = 0; j < WEEK; ++j)
        {
        printf("City %d, Day %d = %d\n", i + 1, j + 1, temperature[i][j]);
        }
    }
}

void sumMatrix(){
    float a[2][2], b[2][2], result[2][2];

    // Taking input using nested for loop
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
        printf("Enter a%d%d: ", i + 1, j + 1);
        scanf("%f", &a[i][j]);
        }

    // Taking input using nested for loop
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
        printf("Enter b%d%d: ", i + 1, j + 1);
        scanf("%f", &b[i][j]);
        }

    // adding corresponding elements of two arrays
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
        result[i][j] = a[i][j] + b[i][j];
        }

    // Displaying the sum
    printf("\nSum Of Matrix: \n");

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
        {
        printf("%.1f\t", result[i][j]);

        if (j == 1)
            printf("\n");
        }
}

void threeDi(){
    // C Program to store and print 12 values entered by the user

    int test[2][3][2];

    printf("Enter 12 values: \n");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
        for (int k = 0; k < 2; ++k)
        {
            scanf("%d", &test[i][j][k]);
        }
        }
    }

    // Printing values with the proper index.

    printf("\nDisplaying values:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
        for (int k = 0; k < 2; ++k)
        {
            printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
        }
        }
    }

}
void insertArray(){
int a,b,c;

printf("masukan jumlah baris: ");
scanf("%d", &a);
printf("masukan jumlah kolom: ");
scanf("%d", &b);

int duaD[a][b];
scanf("masukan data array : ");
for(int i=0; i < a; ++i){
        for(int j=0; j < b; ++j){
            printf("array ke-[%d][%d] = ",i,j);
            scanf("%d\t", &duaD[i][j]);
        }
        printf("\n");
}

printf("print array 2D : \n");
//print array two dimension
for(int i=0; i< a; ++i){
    for(int j=0; j< b; ++j){
        printf("%d\t", duaD[i][j]);
    }
    printf("\n");
}
//print per array
for(int i =0; i< a; ++i){
    for(int j=0; j<b; ++j){
        printf("array indeks [%d][%d] : %d\n",i,j,duaD[i][j] );
    }
    printf("\n");
}
}