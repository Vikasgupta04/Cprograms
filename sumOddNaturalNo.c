#include <stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter the number upto which you want to print the odd natural numbers and their sum - ");
	scanf("%d",&n);
	printf("The odd natural numbers are - ");
	for(i = 1; i<=n; i++){
		if(i%2!=0){
			printf("%d ",i);
			sum += i;
		}
	}
	printf("\nThe sum is - %d", sum);
}
