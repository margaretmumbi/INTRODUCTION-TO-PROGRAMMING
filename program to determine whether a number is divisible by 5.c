// c program to determine if is divisible by 5
#include<stdio.h>

int main(){
	int num;
	printf("\n\tEnter a number:\t");
	scanf("%d",&num); 
	
	if(num % 5 == 0){
		printf("\nDivible by five\n");
	}
	else{
		printf("\nNot Divisible\n");
	}
	
	return 0;

 }

    