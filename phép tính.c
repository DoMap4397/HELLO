 /* Fig. 2.1: fig02_01.c
 A first program in C*/
 #include <stdio.h>
 
 /*function main begins program execution */
 int main()
 {
     int x,y;
     x = 75;
     y = x*x;
     printf("The integers are : %d & %d\n", x, y);
     printf("The addition gives : %d\n", x + y);
     printf("The subtraction gives : %d\n", x - y);
     printf("The multiplication gives : %d\n", x * y);
     printf("The division gives : %d\n", x / y);
     printf("The modolus gives : %d\n", x % y);
     
     getchar();
     return 0; /*indicate that program ended successfully*/
 } /* end function main */
