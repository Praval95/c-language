#include<stdio.h>
int main()
{
    char name [100];
    int numtimes;

    printf("Enter your Name :");
    scanf("%s",&name);
    printf("Enter number of times to print your name :");
    scanf("%d",&numtimes);

    for(int i=1;i<=numtimes;i++)
    {
        printf("%d:  \"%s\" (length: %zu)\n",i,name,strlen(name));
    }
return 0;
}

