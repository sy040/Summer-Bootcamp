#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int n,l,r;
    printf("Enter string size: ");
    scanf("%d",&n);
    char str[r];
    printf("Enter string: ");
    scanf("%s",str);
    char temp;
    l=0,r=n-1;
    while(l<r){
        if(!isalpha(str[l])){
            l++;
        }
        else if(!isalpha(str[r])){
            r--;
        }
        else{
            temp=str[l];
            str[l]=str[r];
            str[r]=temp;
            l++;
            r--;
        }
    }
    printf("%s",str);

}