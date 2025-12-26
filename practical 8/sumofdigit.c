#include <stdio.h>

//AANCHAL DHANGAR RU 25 10010//
int sumOfDigits(int n) {
int sum = 0;
while (n > 0) {
sum = sum + (n % 10);
n = n / 10;
}
return sum;
}
int main() {
int n;
printf("Enter number: ");
scanf("%d", &n);
printf("Sum of digits = %d", sumOfDigits(n));
return 0;
}
//output//
//Enter number: 40// 
//Sum of digits = 4//