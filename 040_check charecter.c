#include<stdio.h>
#include<ctype.h>
main()
{
    char ch ;
    printf("Enter any character : ") ;
    scanf("%c" , &ch) ;

    if ( isupper(ch) )
        printf("The character is of upper case") ;
    else if (islower(ch) )
        printf("The character is of lower-case") ;
    else if ( isdigit(ch) )
        printf("The character is a digit") ;
    else
        printf("The character is a special character") ;
    printf("\n") ;
    return 0 ;
}
