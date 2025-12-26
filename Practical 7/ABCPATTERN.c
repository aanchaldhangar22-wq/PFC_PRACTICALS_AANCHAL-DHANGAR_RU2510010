#include <stdio.h>
//AANCHAL DHANGAR RU 25 10010//
int main(){
int i,j;
char ch;
for(i=1;i<=4;i++){
ch='A';
for(j=1;j<=i;j++){
printf("%c",ch);
ch++;
}
printf("\n");
}
return 0;
}
//OUTPUT//
//A//
//AB//
//ABC//
//ABCD//