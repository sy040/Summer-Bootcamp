#include<stdio.h>
int main(){
    int n,i;
    printf("Enter array size:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[n-1];

    printf("Leaders: %d",max);
    for(i=n-2;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            printf(" %d",max);
        }
    }
    return 0;
}