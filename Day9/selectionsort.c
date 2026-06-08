#include<stdio.h>
int main(){
    int i,r,j,min,s;
    printf("Enter range: ");
    scanf("%d",&r);
    int arr[r];
    printf("Enter array values(only 0,1,2): ");
    for(i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(i=0;i<r-1;i++){
        min=i;
        for(j=i+1;j<r;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<r;i++){
        printf("%d " ,arr[i]);
    }
}