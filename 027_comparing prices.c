#include<stdio.h>
int main(){
    int sphone , vphone;


    printf("Enter your Samsung mobile price :");
    scanf("%d",&sphone);

    printf("Enter your vivo mobile price :");
    scanf("%d",&vphone);

    if(sphone > vphone)
       printf("samsung mobile is costlier than vivo mobile");

    else if (sphone < vphone)
        printf("vivo mobile is costlier than samsung mobile");

    else
        printf("Both are at same price");
        printf("\n");
    getch();

return 0;
}
