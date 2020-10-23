/* Fig. 2.1: fig02_01.c
 A first program in C*/
 #include <stdio.h>
 
 /*function main begins program execution */
 int main(void)
 {
     int integer1; /* first number to be input by user */
     int integer2; /* second number to be input by user */
     int A, B, C, D, E; /* variable in which will be stored */
     
     printf( "Enter first integer\n" ); /* prompt */
     scanf( "%d", &integer1 ); /* read an integer */
     
     printf( "Enter second integer\n" ); /* prompt */
     scanf( "%d", &integer2 ); /* read an integer  */
     
     A = integer1 + integer2; /* assign total to A */
     B = integer1 - integer2; /* assign tatal to B */
     C = integer1 * integer2; /* assign tatal to C */
     D = integer1 / integer2; /* assign tatal to D */
     E = integer2 % integer1; /* assign tatal to E */
     printf( "A is %d\n", A ); /* print A */
     printf( "B is %d\n", B); /* print B */
     printf( "C is %d\n", C); /* print C */
     printf( "D is %d\n", D); /* print D */
     printf( "E is %d\n", E); /* print E */
     return 0; /* indicate that program ended successfully */
 } /* end function main */
