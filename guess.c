#include<stdio.h>
int main(){
	printf("Guess the number between 1 to 100 - ");
	int num = 100;
	while(1)
	{	
	int guess;
	scanf("%d",&guess);
	if(guess == num){
		printf("Congrats you won the game.");
		break;
	}
	else if(guess<num){
		printf("Try greater number\n");
	}
	else{
		printf("Try smaller number\n");
	}
	}	
	return 0;
}
