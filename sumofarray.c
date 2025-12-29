#include <stdio.h>
//AANCHAL DHANGAR RU 25 10010//
int main() {
int n, i;
int a[100];
int sum = 0;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) {
scanf("%d", &a[i]);
}
for (i = 0; i < n; i++) {
if (a[i] % 2 == 0) {      
sum += a[i];
}
}
printf("Sum of all even elements = %d\n", sum);
return 0;
}
//OUTPUT//
//Enter size of array: 5//
//Enter 5 elements://
//6 5 4 3 1//
//Sum of all even elements = 10//