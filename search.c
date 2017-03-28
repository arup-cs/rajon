#include<stdio.h>
#include<stdlib.h>

int searchLinear (int s, int *list, int n){
	int i;
	for (i=0;i<n;i++){
		if(s==list[i]){
			return i;
		}
	}
	return -1;
	
}

int main(){
	int i,numbers[10], userInput,result;
	
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
	result=searchLinear(userInput, numbers,10);
	if(result>0){
		printf("Using Linear Search : The value %d occurs at position %d\n",userInput,result);
	}else{
		printf("Returned value=-1: The number does not occur in the array\n");
	}

	return 0;
	}
