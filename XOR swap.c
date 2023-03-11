#include <stdio.h>

int main()

{

 int x,y;

 printf("Enter a number x=");
 scanf("%d",&x);
 printf("Enter a number y=");
scanf("%d",&y);
x=x^y;
y=x^y;
x=x^y;
//swapping of x and y using XOR
printf("%d%d",x,y);
return 0;
}
