#include<stdio.h>
int main()
{
    char Cname[50];
    char Area[50];
    char city[50];

    printf("Entre your Company_Name :");
    scanf("%s",&Cname);

    printf("Enter your Area Name :");
    fflush(stdin);
    scanf("%s",&Area);

    printf("Enter your City :");
    scanf("%s",&city);

    printf("\t\t\t%s\n",Cname);
    printf("\t\t\t%s\n",Area);
    printf("\t\t\t%s\n",city);
    printf("\n");
getch();
return 0;
}
