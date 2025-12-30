#include <stdio.h>
// AANCHAL DHANGAR RU 25 10010//
int main() {
int n, i;
int a[100];
int max, min;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
max = a[0];
min = a[0];
for (i = 1; i < n; i++) {
if (a[i] > max)
max = a[i];
if (a[i] < min)
min = a[i];
}
printf("Maximum element = %d\n", max);
printf("Minimum element = %d\n", min);
return 0;
}
//OUTPUT//
//Enter size of array: 5//
//Enter 5 elements://
//4 3 2 1 5//
//Maximum element = 5//
//Minimum element = 1//
