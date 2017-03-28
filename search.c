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

int searchBinary(int s, int * list, int n){
	int i,middle,right;
	static int left=0;
	right=n-1;
	middle=(left+right)/2;
	if(left>=right){
		return -1;
	}
	if(s==list[middle]){
		return middle;
	}else if(s>list[middle]){
		left=middle;
	}else if(s<list[middle]){
		right=middle;
	}
	searchBinary(s, list, right);
	
}

void printResult(int userInput, int result, char* string){
		if(result>0){
		printf("Using %s Search : The value %d occurs at position %d\n",string, userInput,result);
	}else{
		printf("Returned value=-1: The number does not occur in the array\n");
	}
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
	printResult(userInput, result, "Linear");
	result=searchBinary(userInput, numbers,10);
	printResult(userInput, result, "Binary");
	return 0;

	}
