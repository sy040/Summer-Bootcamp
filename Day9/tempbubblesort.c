#include<stdio.h>
int main(){
    int i,r,j;
    printf("Enter range: ");
    scanf("%d",&r);
    float temp[r];

    printf("Enter temperature:");
    for(i=0;i<r;i++){
        scanf("%f",&temp[i]);
    }
    float t;
    for(i=0;i<r;i++){
        for(j=i+1;j<r;j++){
            if(temp[i]>temp[j]){
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
            }
        }
    }

    printf("\nSorted temperatures:");
    for (i = 0; i<r; i++)
    {
        printf("%.2f ",temp[i]);
    }
    printf("\nColdest temperature:%.2f",temp[0]);
    printf("\nHotest temperature:%.2f",temp[r-1]);
}