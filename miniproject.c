#include <stdio.h>
#include <math.h>
  //ANCHAL DHANGAR //
  // RU 25 10010//
int main() {
int choice;
double num1, num2, result = 0.0;
printf("=== MULTIFUNCTIONAL CALCULATOR ===");
printf("1. Addition (+)");
printf("2. Subtraction (-)");
printf("3. Multiplication (*)");
printf("4. Division (/)");
printf("5. Square Root (sqrt)");
printf("6. Power (pow)");
printf("7. Exit");
printf("Enter your choice (1-7): ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);
result = num1 + num2;
printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
break;
case 2:
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);
result = num1 - num2;
printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
break;
case 3:
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);
result = num1 * num2;
printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
break;
case 4:
printf("Enter two numbers: ");
scanf("%lf %lf", &num1, &num2);
if(num2 != 0) {
result = num1 / num2;
printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
} else {
printf("Error: Division by zero!");
}
break;
case 5:
printf("Enter a number: ");
scanf("%lf", &num1);
if(num1 >= 0) {
result = sqrt(num1);
printf("sqrt(%.2lf) = %.2lf", num1, result);
} else {
printf("Error: Square root of negative number!");
}
break;
case 6:
printf("Enter base and exponent: ");
scanf("%lf %lf", &num1, &num2);
result = pow(num1, num2);
printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
break;
case 7:
printf("Thank you for using the calculator!");
return 0;
default:
printf("Invalid choice! Please enter 1-7.");
}
return 0;
}
//output//
//=== MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 1 4//
//Enter two numbers: 1 4 //
//4.00 + 1.00 = 5.00 //
//=== MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 2//
//Enter two numbers: 7 4//
//7.00 - 4.00 = 3.00//
//=== MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 3//
//Enter two numbers: 4 5//
//4.00 * 5.00 = 20.00//
//=== MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 4//
//Enter two numbers: 4 2 //
//4.00 / 2.00 = 2.00//
// === MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 5//
//Enter a number: 16//
//sqrt(16.00) = 4.00//
//=== MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 6//
//Enter base and exponent: 2 3 //
//2.00 ^ 3.00 = 8.00//
//=== MULTIFUNCTIONAL CALCULATOR ===1. Addition (+)2. Subtraction (-)3. Multiplication (*)4. Division (/)5. Square Root (sqrt)6. Power (pow)7. ExitEnter your choice (1-7): 7//
//Thank you for using the calculator!//