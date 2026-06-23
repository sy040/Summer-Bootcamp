#include<stdio.h>
//Fixed-size subarrays
int maxsum(int arr[],int n,int k){
    int s=0,ms=0,i;
    for(i=0;i<k;i++){
        s+=arr[i];
    }
    ms=s;
    for(i=k;i<n;i++){
        s=s-arr[i-k]+arr[i];
        if(ms<s){
            ms=s;
        }
    }
    printf("Max sum of subarray of size %d in array is %d",k,ms);
}

int main(){
    int i,n,k;
    printf("Enter range of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter size of array window: ");
    scanf("%d",&k);
    maxsum(arr,n,k);
}