#include<stdio.h>
#include<stdlib.h>
#define s 5
int queue[s];
int f=-1,r=-1;
void enqueue(){
    int n;
    if(((r+1)%s)==f){
        printf("Overflow \n");
        return;
    }
    printf("Enter value:");
    scanf("%d",&n);
    if(f==-1){
        f=r=0;
    }
    else{
        r=(r+1)%s;
    }
        queue[r]=n;
}
void dequeue(){
    if(f==-1){
        printf("Empty queue \n");
        return;
    }
    printf("Deleted: %d \n",queue[f]);
    if(f==r){
        f=r=-1;
    }
    else{
        f=(f+1)%s;
    }
}
void display(){
    int i=f;
    if(f==-1){
        printf("Empty Queue \n");
        return;
    }
    while (1){
        printf("%d ",queue[i]);
        if(i==r){
            break;
        }
        i=(i+1)%s;
    }
}
void peek(){
    if(f==-1){
        printf("Empty \n");
        return;
    }
    else{
        printf("Top element is %d \n",queue[f]);
    }
}
int main(){
    int n,i;
    while(1){
        printf("\n Enter choice 0:exit/1:enqueue/2:dequeue/3:dispaly/4:peek: ");
        scanf("%d",&n);
        switch (n)
        {
        case 0:
            printf("Exited \n");
            exit(0);
            break;
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        default:
            printf("Error \n");
            break;
        }
    }

}