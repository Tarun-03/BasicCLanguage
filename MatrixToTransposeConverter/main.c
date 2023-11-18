#include <stdio.h>

int main()
{
//declaring variables

int a11, a12, a13, a21, a22, a23, a31, a32, a33;


printf("\n");
printf("\n");
printf("\n");
printf("Welcome To Matrix Transpose Converter\n");

printf("\n");
printf("\n");
printf("\n");

// Taking user input


printf("Please Enter Element of row-1 and column-1 > ");
scanf(" %d", &a11);
printf("Please Enter Element of row-1 and column-2 > ");
scanf(" %d", &a12);
printf("Please Enter Element of row-1 and column-3 > ");
scanf(" %d", &a13);
printf("Please Enter Element of row-2 and column-1 > ");
scanf(" %d", &a21);
printf("Please Enter Element of row-2 and column-2 > ");
scanf(" %d", &a22);
printf("Please Enter Element of row-2 and column-3 > ");
scanf(" %d", &a23);
printf("Please Enter Element of row-3 and column-1 > ");
scanf(" %d", &a31);
printf("Please Enter Element of row-3 and column-2 > ");
scanf(" %d", &a32);
printf("Please Enter Element of row-3 and column-3 > ");
scanf(" %d", &a33);
printf("\n");
printf("\n");
printf("\n");



//Printing out the original matrix entered
printf("The Matrix you did input is > \n ");
printf("%d %d %d\n ", a11, a12, a13);
printf("%d %d %d\n ", a21, a22, a23);
printf("%d %d %d\n ", a31, a32, a33);

printf("\n");
printf("\n");
printf("\n");


//Printing out the transpose of the matrix
printf("The transpose of this matrix is \n ");
printf("%d %d %d\n ", a11, a21, a31);
printf("%d %d %d\n ", a12, a22, a32);
printf("%d %d %d\n ", a13, a23, a33);
printf("\n");
printf("The program will Exit in 10 sec");
printf("\n");
sleep(11);

return 0;
}

