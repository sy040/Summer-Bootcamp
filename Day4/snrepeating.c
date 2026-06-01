#include<stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);
    // int hash[256]={0};
    int hash[26]={0};
    int i;
    for(i=0;str[i]!='\0';i++){
        // hash[str[i]]+=1;
        hash[str[i]-'a']+=1;
    }

    for(i=0;str[i]!='\0';i++){
        // if(hash[str[i]]==1){
            if(hash[str[i]-'a']==1){
            printf("%c",str[i]);
            exit(0);
        }
    }
    printf("-1");
}