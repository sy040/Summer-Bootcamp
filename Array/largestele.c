#include<stdio.h>
int main(){
    int n,i,mx;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mx=0;
    for(i=0;i<n;i++){
        if(arr[mx]<=arr[i]){
            mx=i;
        }
    }
    printf("Largest Element is %d\n",arr[mx]);
}