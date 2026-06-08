#include<stdio.h>
int main(){
    int r,i,t,f=0;
    printf("Enter range: ");
    scanf("%d",&r);
    int ticket[r];
    printf("Enter ticket that win: ");
    for(i=0;i<r;i++){
        scanf("%d",&ticket[i]);
    }
    printf("Your Ticket number: ");
    scanf("%d",&t);

    for(i=0;i<r;i++){
        if(ticket[i]==t){
            printf("Congratulations your ticket %d won at %d!",t,i);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Better Luck next time!");
    }
    return 0;
}