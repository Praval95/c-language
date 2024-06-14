#include <stdio.h>
int main (){
char Name [100] ;
long long Mobile_Number;
int Dob;
// Using long long to handle large mobile numbers
     printf("Enter your Name: ");
     scanf("%s",&Name); // No & for arrays
     printf("Enter Your Mobile: ");
     fflush (stdin) ;
     scanf ("%d", &Mobile_Number);
// sl14 for long long
    printf("Enter your Date Of Birth (YYYYMMDD): ");
    scanf ("%d", &Dob);
    printf("Name: %s and Mobile No: %d and Date Of Birth: %d",Name, Mobile_Number, Dob);
    printf("\n");
    getch();
return 0;
}
