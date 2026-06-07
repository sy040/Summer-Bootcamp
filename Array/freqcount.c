#include<stdio.h>
int main(){
    int n,i,s;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq[100]={0};
    for(i=0;i<n;i++){
        freq[arr[i]]+=1;
    }
    
    for(i=0;i<n;i++){
        if(freq[i]==0){
            continue;
        }
        else{
            printf("%d's frquency is %d\n",i,freq[i]);
        }
    }
}