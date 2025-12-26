#include<stdio.h>
// aanchal dhangar//
//RU 25 10010//
int main (){
int n , sum = 0 ;
printf("ENTER THE LIMIT: ");
scanf ("%d", &n);
for ( int i = 1; i <= n ; i++){
if ( i % 2 != 0){
continue;
}
sum += i; 
}
printf ("Sum of even numbers = %d\n", sum );
return 0;
}
//output//
//ENTER THE LIMIT: 22//
//Sum of even numbers = 132//

