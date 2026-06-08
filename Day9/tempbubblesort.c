#include<stdio.h>
int main(){
    int i,r,j,f;
    printf("Enter range: ");
    scanf("%d",&r);
    float temp[r];

    printf("Enter temperature:");
    for(i=0;i<r;i++){
        scanf("%f",&temp[i]);
    }
    float t;
    for(i=0;i<r;i++){
        f=0;
        for(j=i+1;j<r;j++){
            if(temp[i]>temp[j]){
                t=temp[i];
                temp[i]=temp[j];
                temp[j]=t;
                f=1;
            }
        }
        if(f==0){
            break;
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