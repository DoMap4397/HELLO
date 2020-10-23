/* Fig. 2.13: fig02_13.c
Using if statements, relationnal
 operators, and equality operators */
 #include <stdio.h>
 
 /* function main begins program execution */
 int main( void )
{
    int num1; /* first number to be read from user */
    int num2; /* sencond number to be read from uesr */
    
    printf( "Enter two integers, anh I will tell you\n" );
    printf( "the relationships they satisfy: ");
    
    scanf( "%d%d", &num1, &num2 ); /* read two integers */
    
    if ( num1 == num2 ){
        printf( "%d is equal to %d\n", num1, num2 );
    } /* end if */
    
    if ( num1 != num2 ){
        printf( "%d is not equal to %d\n", num1, num2 );
    } /* end if */
    
    if ( num1 < num2 ){
        printf( "%d is less than %d\n", num1, num2 );
    } /* end if */
}
