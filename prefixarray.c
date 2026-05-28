#include<stdio.h>
int main(){
	int n,i,sum,l,r;
	scanf("%d",&n);
	int arr[50];
	int prefix[50];
	//indexing of array is from 0 to n
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&l);
	scanf("%d",&r);
	int p[50]={0};
	//indexing 1 to n
	for(i=1;i<=n;i++){
		prefix[i]=prefix[i-1]+arr[i-1];
	}
	sum=prefix[r]-prefix[l-1];
	printf("%d",sum);

}
