#include <stdio.h>
int main (){
int storedpin = 1922;
int userpin;
int attempts = 0;
// AANCHAL DHANGAR //
// RU 25 10010//
printf(" ATM PIN AUTHENTICATION \n");
while (attempts < 3){
printf ("enter your 4 digit pin :");
scanf ("%d", &userpin);
if (userpin == storedpin){
printf ("\n PIN VERIFIED SUCCESSFULLY!\n");
printf ("Access Granted . Welcome!\n");
return 0 ;
}
else {
attempts++;
printf("INcorrect pin ! attempts left : %d\n", 3 - attempts);
}
}
printf ("\n!!! ACCOUNT BLOCKED!!!!\n");
printf (" Too many incorrect attempts.\n");
return 0;
}
// OUTPUT//
//ATM PIN AUTHENTICATION //
//enter your 4 digit pin :1922//

 //PIN VERIFIED SUCCESSFULLY!//
//Access Granted . Welcome!//