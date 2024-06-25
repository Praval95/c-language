#include<stdio.h>
int main()
{
    int  tot;
    char c, cpp, java;
    float avg;
    printf("Enter marks of C :");
    scanf("%d",&c);
    printf("Enter marks of CPP :");
    scanf("%d",&cpp);
    printf("Enter marks of JAVA :");
    scanf("%d",&java);

    tot = c + cpp + java;
    avg = tot/3;

    if (c >= 40 && cpp >= 40 && java >= 40)
    {
        printf("Average: %.2f (Pass)\n", avg);
        }
        else
        {
           printf("Failed in subject: ");
         if (c < 40)
           {
            printf("c");
        }
          if (c < 40)
           {
            printf("cpp");
        }
           if (java < 40)
            {
            printf("java");
        }
        printf("\nNo grade.\n");
    }

  printf("\nyour total marks are %d",tot);
  printf("\nyour average marks are %f",avg);

return 0;
}
