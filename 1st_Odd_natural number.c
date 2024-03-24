#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter no. of odd natural number: ");
	scanf("%d",&n);
	for(i=0;i<2*n;i=i+2){
		j=i+1;
		printf("%d ",j);
	}
	getch();
}
