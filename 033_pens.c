#include<stdio.h>
int main(){
    int rey , mon , par ;
    rey = mon = par = 0;

    printf("Enter price of reynolds pen :");
    scanf("%d",&rey);
    printf("Enter price of montex pen :");
    scanf("%d",&mon);
    printf("Enter price of parker pen :");
    scanf("%d",&par);

    if(rey > mon && rey > par)
        printf("\nreynolds pen is costlier than the others two pens\n.");
    else if(mon > rey && mon > par)
        printf("\nmontex pen is costlier than the others two pens.\n");
    else if(par > rey && par > mon)
        printf("\nparker pen is costlier than the others two pens.\n");
    else
        printf("\nAll three pens are of same price\n.");
getch();
return 0;
}
