#include <stdio.h>
//AANCHAL DHANGAR RU 25 10010//
int main() {
int n, i, j;
int a[10][10];
int sum = 0;
printf("Enter order of square matrix (n): ");
scanf("%d", &n);
printf("Enter elements of %d x %d matrix:\n", n, n);
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
scanf("%d", &a[i][j]);
}
}
for (i = 0; i < n; i++) {
sum += a[i][i];   
}
printf("Sum of main diagonal elements = %d\n", sum);
return 0;
}
//OUTPUT//
//Enter order of square matrix (n): 3//
//Enter elements of 3 x 3 matrix://
//1 2 3 4 5 6 7 8 9 //
//Sum of main diagonal elements = 15//
