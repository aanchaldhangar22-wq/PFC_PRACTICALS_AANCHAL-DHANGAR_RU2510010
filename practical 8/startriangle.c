#include <stdio.h>

//AANCHAL DHANGAR RU 25 10010//
void printTriangle(int n) {
int i, j;
for (i = 1; i <= n; i++) {
for (j = 1; j <= i; j++) {
printf("* ");
}
printf("\n");
}
}
int main() {
int n;
printf("Enter height: ");
scanf("%d", &n);
printTriangle(n);
return 0;
}
//OUTPUT//
//Enter height: 5
//* //
//* *//
//* * *//
//* * * *//
//* * * * *//