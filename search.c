#include<stdio.h>
#include<stdlib.h>


int main(){
	int i,numbers[10], userInput;
	
	for(i=0;i<10;i++){
		printf("Enter a number:");
		scanf("%d",&numbers[i]);
	}
	printf("you have entered\n");
	for(i=0;i<10;i++){
		printf("%d  ",numbers[i]);	
	}
	printf("What value you are searching?");
	scanf("%d",&userInput);
	
	

	return 0;
	}
