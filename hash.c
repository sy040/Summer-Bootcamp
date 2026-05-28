#include<stdio.h>
int main(){
    int n;
    int hash[256];
    for(n=0;n<256;n++){
        hash[n]=65+n;
    }

    for(n=0;n<256;n++){
        printf("%c ",hash[n]);
    }
    return 0;

}