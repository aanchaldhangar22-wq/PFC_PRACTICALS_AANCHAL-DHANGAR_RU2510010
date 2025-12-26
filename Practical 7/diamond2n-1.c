#include <stdio.h>
//AANCHAL DHANGAR RU 25 10010 //
int main() {
int n=5;
for (int i=0;i<2*n-1;i++) {
int dia;
if (i<n)dia=2*(n-i)-1;
else dia =2*(i-n+1)+1;
for (int j=0;j<dia;j++)
printf(" ");
for (int a=0;a<2*n-dia;a++){
printf("* ");}
printf("\n");}
return 0;
}
//OUTPUT//
  //      * 
 //     * * * 
//     * * * * * 
//   * * * * * * * 
 //* * * * * * * * * 
 //  * * * * * * * 
    // * * * * * 
      // * * * 
        // * 