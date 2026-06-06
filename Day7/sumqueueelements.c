#include<stdio.h>
#define size 100
int queue[size];
int f=-1,r=-1;
void enqueue(int n){
    if(r==size){
        printf("Overflow");
        return;
    }
    if(f==-1){
        f=r=0;
    }
        queue[r]=n;
        r++;
}
void displaysum(){ 
    int sum,i;
    sum=0;
    for(i=f;i<r;i++){
        sum+=queue[i];
    }
    printf("Sum of all elements is %d.",sum);
}
int main(){
    int i,val,n;
    printf("Enter range: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter value: ");
        scanf("%d",&val);
        enqueue(val);
    }
    displaysum();

}