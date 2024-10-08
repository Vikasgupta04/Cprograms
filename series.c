#include<stdio.h>
int main(){
	int n, r, i, num=0,sum = 0;
	printf("Enter the number and number of repetitions for that separated with a space - ");
	scanf("%d %d",&n,&r);
	printf("The series is - ");
	for(i = 1; i<=r; i++){
		num = num*10 + n;
		printf("%d ", num);
		sum += num;
	}
	printf("The sum of the series is - %d", sum);
	return 0;
}
