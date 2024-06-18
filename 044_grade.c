#include<stdio.h>
int main()
{
    int m ,p ,c;
    float avg , tot;
    printf("Enter marks of maths........ :");
    scanf("%d",&m);
    printf("Enter marks of physics........ :");
    scanf("%d",&p);
    printf("Enter marks of chemistry......... :");
    scanf("%d",&c);
    tot = m + p + c;
    avg = tot/3;
    printf("\nYour average marks are %0.2f:\n",avg);


    if(avg > 90)
        printf("\nyour GRADE - A+\n");
    else if(avg >= 80)
        printf("\nyour GRADE - A\n");
    else if(avg >= 70)
        printf("\nyour GRADE - B+\n");
    else if(avg >= 60)
        printf("\nyour GRADE - B\n");
    else if(avg >= 50)
        printf("\nyour GRADE - C\n");
    else{
        printf("\nSorry you have Failed in the exam\n");
        printf("better luck for the nxet time\n");
    }
return 0;
}

