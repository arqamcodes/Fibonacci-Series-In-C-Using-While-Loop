#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		
//	Declaring the variable
	int a,b,result;
	
//	Assigning values to first and second term
	a = 0;
	b =1;
	
//	initialize the next term
	result = a+b;
	
//	printing the first and second term
	printf("Fibonacci Series: %d,%d,",a,b);
	
	while (result<30){
		
		printf("%d,",result);
		
		
		a = b;
		b = result ;
		result = a+b;
		
		

	}
	
	
	
	return 0;
}
