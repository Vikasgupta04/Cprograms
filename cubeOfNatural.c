#include<stdio.h>
int main(){
int n,i;
printf("Enter the no. upto which you want to calculate cube :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d=%d\n",i,i*i*i);
}
return 0;
}
